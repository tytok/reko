// ais3_crackme.c
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.8.2.0.

#include "ais3_crackme.h"

// 00000000004003C8: void _init()
void _init()
{
	call_gmon_start();
}

// 0000000000400410: void _start(Register (ptr64 Eq_n) rdx, Stack Eq_n qwArg00)
void _start( * rdx, Eq_n qwArg00)
{
	__align((char *) fp + 0x08);
	__libc_start_main(&globals->t4005C5, qwArg00, (char *) fp + 0x08, &globals->t400620, &globals->t4006B0, rdx, fp);
	__hlt();
}

// 000000000040043C: void call_gmon_start()
void call_gmon_start()
{
	if (__gmon_start__ != 0x00)
	{
		word64 rsp_n;
		byte SCZO_n;
		word64 rax_n;
		byte SZO_n;
		bool C_n;
		bool Z_n;
		__gmon_start__();
	}
}

// 0000000000400460: void deregister_tm_clones(Register word64 r8)
void deregister_tm_clones(word64 r8)
{
	if (true || 0x00 == 0x00)
		return;
	word64 rsp_n;
	word32 eax_n;
	word64 rax_n;
	word64 rbp_n;
	word64 r8_n;
	byte SCZO_n;
	byte CZ_n;
	byte SZO_n;
	bool C_n;
	bool Z_n;
	word32 edi_n;
	word64 rdi_n;
	null();
}

// 0000000000400490: void register_tm_clones(Register word64 r8)
void register_tm_clones(word64 r8)
{
	if (false || 0x00 == 0x00)
		return;
	word64 rsp_n;
	word64 rax_n;
	word64 rbp_n;
	word64 r8_n;
	byte SCZO_n;
	word64 rdx_n;
	bool Z_n;
	byte SZO_n;
	bool C_n;
	word64 rsi_n;
	word64 rdi_n;
	null();
}

// 00000000004004D0: void __do_global_dtors_aux(Register word64 r8)
void __do_global_dtors_aux(word64 r8)
{
	if (globals->b601038 == 0x00)
	{
		deregister_tm_clones(r8);
		globals->b601038 = 0x01;
	}
}

// 00000000004004F0: void frame_dummy(Register word64 r8)
void frame_dummy(word64 r8)
{
	if (globals->qw600E08 == 0x00 || 0x00 == 0x00)
		register_tm_clones(r8);
	else
	{
		word64 rsp_n;
		byte SCZO_n;
		bool Z_n;
		word32 eax_n;
		word64 rax_n;
		byte SZO_n;
		bool C_n;
		word64 rbp_n;
		word32 edi_n;
		word64 rdi_n;
		word64 r8_n;
		word64 rdx_n;
		word32 edx_n;
		word64 rsi_n;
		fn0000000000000000();
		register_tm_clones(r8_n);
	}
}

// 0000000000400520: Register word32 verify(Register (arr Eq_n) rdi)
word32 verify(Eq_n rdi[])
{
	word32 dwLoc0C_n = 0x00;
	while (true)
	{
		word32 eax_n;
		if ((byte) (word32) (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&rdi[(int64) (word32) (uint64) dwLoc0C_n].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00] == 0x00)
			break;
		byte al_n = (byte) (uint64) ((word32) (uint64) dwLoc0C_n ^ (word32) ((uint64) ((word32) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&(rdi)[(int64) ((word32) ((uint64) dwLoc0C_n))].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000)[0x00])));
		uint64 rax_n = (uint64) dwLoc0C_n;
		if ((byte) (word32) (DPB(rax_n, (int16) (byte) rax_n, 0) + 0x00601020) != (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_n >> (byte) ((uint64) ((word32) ((uint64) (0x08 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_n) ^ 0x09)) & 0x03)))))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_n << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_n) ^ 0x09)) & 0x03)))))))))))) + 0x08)
		{
			eax_n = 0x00;
			return eax_n;
		}
		++dwLoc0C_n;
	}
	eax_n = (word32) (dwLoc0C_n == 0x17);
	return eax_n;
}

// 00000000004005C5: void main(Register (ptr64 Eq_n) rsi, Register word32 edi)
void main(Eq_n * rsi, word32 edi)
{
	if (edi != 0x02)
		puts("You need to enter the secret key!");
	else if (verify(rsi->ptr0008) != 0x00)
		puts("Correct! that is the secret key!");
	else
		puts("I'm sorry, that's the wrong secret key!");
}

// 0000000000400620: void __libc_csu_init(Register word32 edi)
void __libc_csu_init(word32 edi)
{
	_init();
	if (0x00600E00 - 0x00600DF8 >> 0x03 != 0x00)
	{
		do
		{
			word64 rsp_n;
			word64 rbp_n;
			word64 r12_n;
			word64 r13_n;
			word64 r14_n;
			word64 r15_n;
			word64 rbx_n;
			byte SCZO_n;
			word32 r13d_n;
			word32 edi_n;
			word64 rsi_n;
			word64 rdx_n;
			byte SZO_n;
			bool C_n;
			bool Z_n;
			word32 ebx_n;
			word64 rdi_n;
			globals->ptr600DF8();
		} while (rbx_n + 0x01 != rbp_n);
	}
}

// 00000000004006B0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 00000000004006B4: void _fini()
void _fini()
{
}

