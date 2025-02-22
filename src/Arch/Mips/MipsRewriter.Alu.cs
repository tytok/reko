#region License
/* 
 * Copyright (C) 1999-2019 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Core;
using Reko.Core.Expressions;
using Reko.Core.Machine;
using Reko.Core.Operators;
using Reko.Core.Rtl;
using Reko.Core.Types;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Reko.Arch.Mips
{
    public partial class MipsRewriter
    {
        private void RewriteAdd(MipsInstruction instr, PrimitiveType size)
        {
            var opLeft = RewriteOperand0(instr.op2);
            var opRight = RewriteOperand0(instr.op3);
            Expression opSrc;
            if (opLeft.IsZero)
                opSrc = opRight;
            else if (opRight.IsZero)
                opSrc = opLeft;
            else
                opSrc = m.IAdd(opLeft, opRight);
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, opSrc);
        }

        private void RewriteAddiupc(MipsInstruction instr)
        {
            var dst = RewriteOperand(instr.op1);
            var offset = ((ImmediateOperand) instr.op2).Value.ToUInt32();
            var addr = instr.Address + (instr.Length + offset);
            m.Assign(dst, addr);
        }

        private void RewriteAluipc(MipsInstruction instr)
        {
            var dst = RewriteOperand(instr.op1);
            var src = RewriteOperand(instr.op2);
            m.Assign(dst, src);
        }

        private void RewriteAnd(MipsInstruction instr)
        {
            var opLeft = RewriteOperand0(instr.op2);
            var opRight = RewriteOperand0(instr.op3);
            Expression opSrc;
            if (opLeft.IsZero)
                opSrc = opLeft;
            else if (opRight.IsZero)
                opSrc = opRight;
            else
                opSrc = m.IAdd(opLeft, opRight);
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, opSrc);
        }

        private void RewriteClz(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            m.Assign(opDst, host.PseudoProcedure("__clz", PrimitiveType.Int32, opSrc));
        }

        private void RewriteDshiftC(MipsInstruction instr, Func<Expression,Expression,Expression> fn, int offset)
        {
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            var opShift = (Constant) RewriteOperand0(instr.op3);
            m.Assign(opDst, fn(opSrc, m.Int32(opShift.ToInt32() + offset)));
        }

        private void RewriteDshift(MipsInstruction instr, Func<Expression, Expression, Expression> ctor)
        {
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            var opShift = RewriteOperand0(instr.op3);
            m.Assign(opDst, m.Shr(opSrc, opShift));
        }

        private void RewriteCopy(MipsInstruction instr)
        {
            var dst = RewriteOperand(instr.op1);
            var src = RewriteOperand(instr.op2);
            m.Assign(dst, src);
        }

        private void RewriteDiv(MipsInstruction instr, Func<Expression, Expression, Expression> ctor)
        {
            var op1 = RewriteOperand(instr.op1);
            var op2 = RewriteOperand(instr.op2);
            if (instr.op3 != null)
            {
                var op3 = RewriteOperand(instr.op3);
                m.Assign(op1, ctor(op2, op3));
            }
            else
            {
                var hi = binder.EnsureRegister(arch.hi);
                var lo = binder.EnsureRegister(arch.lo);
                m.Assign(lo, ctor(op1, op2));
                m.Assign(hi, m.Mod(op1, op2));
            }
        }

        private void RewriteDshift32(MipsInstruction instr, Func<Expression, Expression, Expression> ctor)
        {
            var dst = RewriteOperand(instr.op1);
            var src = RewriteOperand(instr.op2);
            var sh = m.IAdd(RewriteOperand(instr.op3), 32);
            m.Assign(dst, ctor(src, sh));
        }

        private void RewriteExt(MipsInstruction instr)
        {
            var dst = RewriteOperand(instr.op1);
            var src = RewriteOperand(instr.op2);
            var pos = RewriteOperand(instr.op3);
            var size = RewriteOperand(instr.op4);
            m.Assign(dst, host.PseudoProcedure("__ext", dst.DataType, src, pos, size));
        }

        private void RewriteIns(MipsInstruction instr)
        {
            var dst = RewriteOperand(instr.op1);
            var src = RewriteOperand0(instr.op2);
            var pos = RewriteOperand(instr.op3);
            var size = RewriteOperand(instr.op4);
            m.Assign(dst, host.PseudoProcedure("__ins", dst.DataType, dst, src, pos, size));
        }

        private void RewriteLoad(MipsInstruction instr, PrimitiveType dtSmall)
        {
            var opSrc = RewriteOperand(instr.op2);
            var opDst = RewriteOperand(instr.op1);
            if (opDst.DataType.Size != opSrc.DataType.Size)
            {
                // If the source is smaller than the destination register,
                // perform a sign/zero extension.
                opSrc.DataType = dtSmall;
                opSrc = m.Cast(arch.WordWidth, opSrc);
            }
            m.Assign(opDst, opSrc);
        }

        private void RewriteLoadLinked32(MipsInstruction instr)
        {
            var opSrc = RewriteOperand0(instr.op2);
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, host.PseudoProcedure("__load_linked_32", PrimitiveType.Word32, opSrc));
        }

        private void RewriteLoadLinked64(MipsInstruction instr)
        {
            var opSrc = RewriteOperand0(instr.op2);
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, host.PseudoProcedure("__load_linked_64", PrimitiveType.Word64, opSrc));
        }

        private void RewriteStoreConditional32(MipsInstruction instr)
        {
            var opMem = RewriteOperand(instr.op2);
            var opReg = RewriteOperand(instr.op1);
            m.Assign(opReg, host.PseudoProcedure("__store_conditional_32", PrimitiveType.Word32, opMem, opReg));
        }

        private void RewriteStoreConditional64(MipsInstruction instr)
        {
            var opMem = RewriteOperand(instr.op2);
            var opReg = RewriteOperand(instr.op1);
            m.Assign(opReg, host.PseudoProcedure("__store_conditional_64", PrimitiveType.Word64, opMem, opReg));
        }

        private void RewriteLsa(MipsInstruction instr)
        {
            var dst = RewriteOperand(instr.op1);
            var rs = RewriteOperand(instr.op2);
            var rt = RewriteOperand(instr.op3);
            var sh = ((ImmediateOperand) instr.op4).Value.ToInt32();
            m.Assign(dst, m.IAdd(rt, m.Shl(rs, sh)));
        }

        private void RewriteLui(MipsInstruction instr)
        {
            var immOp = (ImmediateOperand)instr.op2;
            long v = immOp.Value.ToInt16();
            var opSrc = Constant.Create(arch.WordWidth, v << 16);
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, opSrc);
        }

        private void RewriteLwl(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            m.Assign(opDst, host.PseudoProcedure("__lwl", PrimitiveType.Word32, opDst, opSrc));
        }

        private void RewriteLwr(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            m.Assign(opDst, host.PseudoProcedure("__lwr", PrimitiveType.Word32, opDst, opSrc));
        }

        private void RewriteLdc1(MipsInstruction instr)
        {
            var opDstFloat = RewriteOperand(instr.op1);
            var opSrcMem = RewriteOperand(instr.op2);
            m.Assign(opDstFloat, opSrcMem);
        }

        private void RewriteLwm(MipsInstruction instr)
        {
            int i = 0;
            int rt = ((RegisterOperand) instr.op1).Register.Number;
            var mem = ((IndirectOperand) instr.op2);
            var rs = binder.EnsureRegister(mem.Base);
            int offset = mem.Offset;
            int count = ((ImmediateOperand) instr.op3).Value.ToInt32();
            while (i != count)
            {
                int this_rt = (rt + i < 32) ? rt + i : rt + i - 16;
                int this_offset = offset + (i << 2);
                var dst = binder.EnsureRegister(arch.GetRegister(this_rt));
                m.Assign(dst, m.Mem32(m.IAddS(rs, this_offset)));

                // if this_rt == rs and i != count - 1:
                // raise UNPREDICTABLE()
                ++i;
            }
        }

        private void RewriteLwxs(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op1);
            var idx = (IndexedOperand) instr.op2;
            var idBase = binder.EnsureRegister(idx.Base);
            var idIndex = binder.EnsureRegister(idx.Index);
            m.Assign(opDst, m.Mem32(m.IAdd(idBase, m.IMul(idIndex, 4))));
        }

        private void RewriteLx(MipsInstruction instr, PrimitiveType dt)
        {
            var dst = RewriteOperand(instr.op1);
            var idx = (IndexedOperand) instr.op2;
            var idBase = binder.EnsureRegister(idx.Base);
            var idIndex = binder.EnsureRegister(idx.Index);
            Expression src = m.Mem32(m.IAdd(idBase, idIndex));
            if (dst.DataType.Size != dt.Size)
            {
                // If the source is smaller than the destination register,
                // perform a sign/zero extension.
                src.DataType = dt;
                src = m.Cast(dst.DataType, src);
            }
            m.Assign(dst, src);
        }

        private void RewriteMf(MipsInstruction instr, RegisterStorage reg)
        {
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, binder.EnsureRegister(reg));
        }

        private void RewriteMt(MipsInstruction instr, RegisterStorage reg)
        {
            var opSrc = RewriteOperand0(instr.op1);
            m.Assign(binder.EnsureRegister(reg), opSrc);
        }

        private void RewriteMovCc(MipsInstruction instr, Func<Expression, Expression> cmp0)
        {
            var opCond = RewriteOperand0(instr.op3);
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            m.BranchInMiddleOfInstruction(
                cmp0(opCond).Invert(),
                instr.Address + instr.Length,
                InstrClass.ConditionalTransfer);
            m.Assign(opDst, opSrc);
        }

        private void RewriteMove(MipsInstruction instr)
        {
            var dst = RewriteOperand(instr.op1);
            var src = RewriteOperand0(instr.op2);
            m.Assign(dst, src);
        }

        private void RewriteMovep(MipsInstruction instr)
        {
            var dstHi = (RegisterOperand) instr.op1;
            var dstLo = (RegisterOperand) instr.op2;
            var srcHi = (RegisterOperand) instr.op3;
            var srcLo = (RegisterOperand) instr.op4;
            var dst = binder.EnsureSequence(dstHi.Register, dstLo.Register, PrimitiveType.Word64);
            Expression src;
            if (srcHi.Register.Number == 0 || srcLo.Register.Number == 0)
            {
                src = m.Seq(RewriteOperand(srcHi), RewriteOperand(srcLo));
            }
            else
            {
                src = binder.EnsureSequence(srcHi.Register, srcLo.Register, PrimitiveType.Word64);
            }
            m.Assign(dst, src);
        }

        private void RewriteMul(MipsInstruction instr, Func<Expression, Expression, Expression> ctor, PrimitiveType dt)
        {
            var op1 = RewriteOperand(instr.op1);
            var op2 = RewriteOperand(instr.op2);
            if (instr.op3 != null)
            {
                var op3 = RewriteOperand(instr.op3);
                m.Assign(op1, ctor(op2, op3));
            }
            else
            {
                var hilo = binder.EnsureSequence(arch.hi, arch.lo, dt);
                m.Assign(hilo, ctor(op1, op2));
            }
        }

        private void RewriteNor(MipsInstruction instr)
        {
            var opLeft = RewriteOperand0(instr.op2);
            var opRight = RewriteOperand0(instr.op3);
            Expression opSrc;
            if (opLeft.IsZero)
                opSrc = opRight;
            else if (opRight.IsZero)
                opSrc = opLeft;
            else
                opSrc = m.Or(opLeft, opRight);
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, m.Comp(opSrc));
        }

        private void RewriteNot(MipsInstruction instr)
        {
            var src = RewriteOperand0(instr.op2);
            if (src is Constant c)
                src = Operator.Comp.ApplyConstant(c);
            else
                src = m.Comp(src);
            var dst = RewriteOperand0(instr.op1);
            m.Assign(dst, src);
        }

        private void RewriteOr(MipsInstruction instr)
        {
            var opLeft = RewriteOperand0(instr.op2);
            var opRight = RewriteOperand0(instr.op3);
            Expression opSrc;
            if (opLeft.IsZero)
                opSrc = opRight;
            else if (opRight.IsZero)
                opSrc = opLeft;
            else
                opSrc = m.Or(opLeft, opRight);
            var opDst = RewriteOperand(instr.op1);
            m.Assign(opDst, opSrc);
        }

        private void RewriteLdl(MipsInstruction instr)
        {
            var opSrc = (IndirectOperand)instr.op2;
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(
                opDst,
                host.PseudoProcedure("__ldl",
                    VoidType.Instance,
                    binder.EnsureRegister(opSrc.Base),
                    m.Int32(opSrc.Offset)));
        }

        private void RewriteLdr(MipsInstruction instr)
        {
            var opSrc = (IndirectOperand)instr.op2;
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(
                opDst,
                host.PseudoProcedure("__ldr",
                    VoidType.Instance,
                    binder.EnsureRegister(opSrc.Base),
                    m.Int32(opSrc.Offset)));
        }

        private void RewriteRestore(MipsInstruction instr, bool ret)
        {
            var sp = binder.EnsureRegister(arch.GetRegister(29));
            int count = ((ImmediateOperand) instr.op3).Value.ToInt32();
            int rt = ((RegisterOperand) instr.op2).Register.Number;
            int u = ((ImmediateOperand) instr.op1).Value.ToInt32();
            int i = 0;
            bool gp = false;
            while (i != count)
            {
                var this_rt = (gp && (i + 1 == count))
                    ? 28
                    : rt + i < 32
                        ? rt + i
                        : rt + i - 16;
                var this_offset = u - ((i + 1) << 2);
                var ea = m.Mem32(m.IAddS(sp, this_offset));
                var reg = binder.EnsureRegister(arch.GetRegister(this_rt));
                m.Assign(reg, ea);
                ++i;
            }
            m.Assign(sp, m.IAddS(sp, u));
            if (ret)
                m.Return(0, 0);
        }

        private void RewriteSave(MipsInstruction instr)
        {
            var sp = binder.EnsureRegister(arch.GetRegister(29));
            int count = ((ImmediateOperand) instr.op3).Value.ToInt32();
            int rt = ((RegisterOperand) instr.op2).Register.Number;
            int u = ((ImmediateOperand) instr.op1).Value.ToInt32();
            bool gp = false;
            int i = 0;
            while (i != count)
            {
                var this_rt = (gp && (i + 1 == count)) ? 28
                    : rt + i < 32
                        ? rt + i
                        : rt + i - 16;
                var reg = binder.EnsureRegister(arch.GetRegister(this_rt));
                var this_offset = -((i + 1) << 2);
                var ea = m.Mem32(m.IAddS(sp, this_offset));
                m.Assign(ea, reg);
                ++i;
            }
            m.Assign(sp, m.ISubS(sp, u));
        }

        private void RewriteSdl(MipsInstruction instr)
        {
            var opDst = (IndirectOperand)instr.op2;
            var opSrc = RewriteOperand0(instr.op1);
            m.SideEffect(
                host.PseudoProcedure("__sdl",
                    VoidType.Instance,
                    binder.EnsureRegister(opDst.Base),
                    m.Int32(opDst.Offset),
                    opSrc));
        }

        private void RewriteSdr(MipsInstruction instr)
        {
            var opDst = (IndirectOperand)instr.op2;
            var opSrc = RewriteOperand0(instr.op1);
            m.SideEffect(
                host.PseudoProcedure("__sdr",
                    VoidType.Instance,
                    binder.EnsureRegister(opDst.Base),
                    m.Int32(opDst.Offset),
                    opSrc));
        }

        private void RewriteSignExtend(MipsInstruction instr, PrimitiveType dt)
        {
            var opDst = RewriteOperand(instr.op2);
            var opSrc = RewriteOperand(instr.op1);
            var tmp = binder.CreateTemporary(dt);
            var dtDst = PrimitiveType.Create(Domain.SignedInt, opDst.DataType.BitSize);
            m.Assign(tmp, m.Slice(dt, opSrc, 0));
            m.Assign(opDst, m.Cast(dtDst, tmp));
        }

        private void RewriteSll(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            var opShift = RewriteOperand0(instr.op3);
            m.Assign(opDst, m.Shl(opSrc, opShift));
        }

        private void RewriteSra(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            var opShift = RewriteOperand0(instr.op3);
            m.Assign(opDst, m.Sar(opSrc, opShift));
        }

        private void RewriteSrl(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op1);
            var opSrc = RewriteOperand0(instr.op2);
            var opShift = RewriteOperand0(instr.op3);
            m.Assign(opDst, m.Shr(opSrc, opShift));
        }

        private void RewriteStore(MipsInstruction instr)
        {
            var opSrc = RewriteOperand0(instr.op1);
            var opDst = RewriteOperand0(instr.op2);
            if (opDst.DataType.Size < opSrc.DataType.Size)
                opSrc = m.Cast(opDst.DataType, opSrc);
            m.Assign(opDst, opSrc);
        }

        private void RewriteSub(MipsInstruction instr, PrimitiveType size)
        {
            var opLeft = RewriteOperand0(instr.op2);
            var opRight = RewriteOperand0(instr.op3);
            Expression opSrc;
            if (opLeft.IsZero)
                opSrc = m.Neg(opRight);
            else if (opRight.IsZero)
                opSrc = opLeft;
            else
                opSrc = m.ISub(opLeft, opRight);
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, opSrc);
        }

        private void RewriteSwl(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op2);
            var opSrc = RewriteOperand0(instr.op1);
            m.Assign(opDst, host.PseudoProcedure(PseudoProcedure.SwL, PrimitiveType.Word32, opDst, opSrc));
        }

        private void RewriteSwr(MipsInstruction instr)
        {
            var opDst = RewriteOperand0(instr.op2);
            var opSrc = RewriteOperand0(instr.op1);
            m.Assign(opDst, host.PseudoProcedure(PseudoProcedure.SwR, PrimitiveType.Word32, opDst, opSrc));
        }

        private void RewriteSwxs(MipsInstruction instr)
        {
            var src = RewriteOperand0(instr.op1);
            var idx = (IndexedOperand) instr.op2;
            var idBase = binder.EnsureRegister(idx.Base);
            var idIndex = binder.EnsureRegister(idx.Index);
            m.Assign(m.Mem32(m.IAdd(idBase, m.IMul(idIndex, 4))), src);
        }

        private void RewriteSxx(MipsInstruction instr, Func<Expression, Expression, Expression> op)
        {
            var dst = RewriteOperand0(instr.op1);
            var src1 = RewriteOperand0(instr.op2);
            var src2 = RewriteOperand0(instr.op3);
            m.Assign(
                dst,
                m.Cast(dst.DataType, op(src1,src2)));
        }

        private void RewriteXor(MipsInstruction instr)
        {
            var opLeft = RewriteOperand0(instr.op2);
            var opRight = RewriteOperand0(instr.op3);
            Expression opSrc;
            if (opLeft.IsZero)
                opSrc = opRight;
            else if (opRight.IsZero)
                opSrc = opLeft;
            else
                opSrc = m.Xor(opLeft, opRight);
            var opDst = RewriteOperand0(instr.op1);
            m.Assign(opDst, opSrc);
        }
    }
}
