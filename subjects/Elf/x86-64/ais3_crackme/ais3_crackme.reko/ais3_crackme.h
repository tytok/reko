// ais3_crackme.h
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.8.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4005C5 Eq_16 t4005C5) (400620 Eq_19 t400620) (4006B0 Eq_20 t4006B0) (4006C8 (str char) str4006C8) (4006F0 (str char) str4006F0) (400718 (str char) str400718) (600DF8 (ptr64 code) ptr600DF8) (600E08 word64 qw600E08) (601038 byte b601038))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start : ptr64)
	T_3 (in signature of call_gmon_start : void)
Eq_5: (fn void ())
	T_5 (in rdx : (ptr64 Eq_5))
	T_21 (in rtld_fini : (ptr64 (fn void ())))
Eq_6: (union "Eq_6" (int32 u0) (word64 u1))
	T_6 (in qwArg00 : Eq_6)
	T_17 (in argc : int32)
Eq_7: (fn void (ptr64))
	T_7 (in __align : ptr64)
	T_8 (in signature of __align : void)
Eq_14: (fn int32 ((ptr64 Eq_16), Eq_6, (ptr64 (ptr64 char)), (ptr64 Eq_19), (ptr64 Eq_20), (ptr64 Eq_5), (ptr64 void)))
	T_14 (in __libc_start_main : ptr64)
	T_15 (in signature of __libc_start_main : void)
Eq_16: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_16 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_23 (in 0x00000000004005C5 : word64)
Eq_19: (fn void ())
	T_19 (in init : (ptr64 (fn void ())))
	T_25 (in 0x0000000000400620 : word64)
Eq_20: (fn void ())
	T_20 (in fini : (ptr64 (fn void ())))
	T_26 (in 0x00000000004006B0 : word64)
Eq_28: (fn void ())
	T_28 (in __hlt : ptr64)
	T_29 (in signature of __hlt : void)
Eq_82: (fn void (word64))
	T_82 (in deregister_tm_clones : ptr64)
	T_83 (in signature of deregister_tm_clones : void)
Eq_112: (fn void (word64))
	T_112 (in register_tm_clones : ptr64)
	T_113 (in signature of register_tm_clones : void)
	T_115 (in register_tm_clones : ptr64)
Eq_126: (struct "Eq_126" 0001 (0 (arr Eq_126) a0000))
	T_126 (in Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : byte)
	T_138 (in Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : byte)
	T_267
	T_268
	T_269
	T_270
Eq_149: (struct "Eq_149" (601020 byte b601020))
	T_149 (in DPB(rax_113, (int16) (byte) rax_113, 0) : word64)
Eq_211: (struct "Eq_211" (8 (ptr64 (arr Eq_126)) ptr0008))
	T_211 (in rsi : (ptr64 Eq_211))
Eq_215: (fn word32 ((ptr64 (arr Eq_126))))
	T_215 (in verify : ptr64)
	T_216 (in signature of verify : void)
Eq_223: (fn int32 ((ptr64 char)))
	T_223 (in puts : ptr64)
	T_224 (in signature of puts : void)
	T_228 (in puts : ptr64)
	T_231 (in puts : ptr64)
Eq_235: (fn void ())
	T_235 (in _init : ptr64)
	T_236 (in signature of _init : void)
Eq_238: (union "Eq_238" (int64 u0) (ptr64 u1))
	T_238 (in 0000000000600E00 : ptr64)
Eq_239: (union "Eq_239" (int64 u0) (ptr64 u1))
	T_239 (in 0000000000600DF8 : ptr64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in call_gmon_start : ptr64)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: (ptr64 (fn T_4 ()))
T_3: (in signature of call_gmon_start : void)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: 
T_4: (in call_gmon_start() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in rdx : (ptr64 Eq_5))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: (ptr64 (fn void ()))
T_6: (in qwArg00 : Eq_6)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: (union (int32 u1) (word64 u0))
T_7: (in __align : ptr64)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: (ptr64 (fn T_13 (T_12)))
T_8: (in signature of __align : void)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: 
T_9: (in  : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: 
T_10: (in fp : ptr64)
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_11: (in 8 : int64)
  Class: Eq_11
  DataType: int64
  OrigDataType: int64
T_12: (in fp + 8 : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: ptr64
T_13: (in __align((char *) fp + 8) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __libc_start_main : ptr64)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: (ptr64 (fn T_27 (T_23, T_6, T_24, T_25, T_26, T_5, T_10)))
T_15: (in signature of __libc_start_main : void)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: 
T_16: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_17: (in argc : int32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_18: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_19: (in init : (ptr64 (fn void ())))
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_20: (in fini : (ptr64 (fn void ())))
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: 
T_21: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: 
T_22: (in stack_end : (ptr64 void))
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: 
T_23: (in 0x00000000004005C5 : word64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_24: (in fp + 8 : word64)
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_25: (in 0x0000000000400620 : word64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn void ()))
T_26: (in 0x00000000004006B0 : word64)
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: (ptr64 (fn void ()))
T_27: (in __libc_start_main(&globals->t4005C5, qwArg00, (char *) fp + 8, &globals->t400620, &globals->t4006B0, rdx, fp) : int32)
  Class: Eq_27
  DataType: int32
  OrigDataType: int32
T_28: (in __hlt : ptr64)
  Class: Eq_28
  DataType: (ptr64 Eq_28)
  OrigDataType: (ptr64 (fn T_30 ()))
T_29: (in signature of __hlt : void)
  Class: Eq_28
  DataType: (ptr64 Eq_28)
  OrigDataType: 
T_30: (in __hlt() : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in __gmon_start__ : ptr64)
  Class: Eq_31
  DataType: word64
  OrigDataType: 
T_32: (in signature of __gmon_start__ : void)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: 
T_33: (in 0x0000000000000000 : word64)
  Class: Eq_31
  DataType: word64
  OrigDataType: word64
T_34: (in __gmon_start__ == 0x0000000000000000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in rsp_14 : word64)
  Class: Eq_35
  DataType: word64
  OrigDataType: word64
T_36: (in SCZO_15 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in rax_16 : word64)
  Class: Eq_37
  DataType: word64
  OrigDataType: word64
T_38: (in SZO_17 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in C_18 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in Z_19 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in __gmon_start__ : ptr64)
  Class: Eq_41
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_42: (in r8 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_43: (in false : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0x0000000000000000 : uint64)
  Class: Eq_44
  DataType: uint64
  OrigDataType: uint64
T_45: (in 0x0000000000000000 : word64)
  Class: Eq_44
  DataType: uint64
  OrigDataType: word64
T_46: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in rsp_42 : word64)
  Class: Eq_47
  DataType: word64
  OrigDataType: word64
T_48: (in eax_43 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in rax_44 : word64)
  Class: Eq_49
  DataType: word64
  OrigDataType: word64
T_50: (in rbp_45 : word64)
  Class: Eq_50
  DataType: word64
  OrigDataType: word64
T_51: (in r8_46 : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_52: (in SCZO_47 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in CZ_48 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in SZO_49 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in C_50 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in Z_51 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in edi_52 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in rdi_53 : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_59: (in 0x0000000000000000 : uint64)
  Class: Eq_59
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_60: (in r8 : word64)
  Class: Eq_60
  DataType: word64
  OrigDataType: word64
T_61: (in true : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in 0x0000000000000000 : uint64)
  Class: Eq_62
  DataType: uint64
  OrigDataType: uint64
T_63: (in 0x0000000000000000 : word64)
  Class: Eq_62
  DataType: uint64
  OrigDataType: word64
T_64: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in rsp_45 : word64)
  Class: Eq_65
  DataType: word64
  OrigDataType: word64
T_66: (in rax_46 : word64)
  Class: Eq_66
  DataType: word64
  OrigDataType: word64
T_67: (in rbp_47 : word64)
  Class: Eq_67
  DataType: word64
  OrigDataType: word64
T_68: (in r8_48 : word64)
  Class: Eq_68
  DataType: word64
  OrigDataType: word64
T_69: (in SCZO_49 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in rdx_50 : word64)
  Class: Eq_70
  DataType: word64
  OrigDataType: word64
T_71: (in Z_51 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in SZO_52 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in C_53 : bool)
  Class: Eq_73
  DataType: bool
  OrigDataType: bool
T_74: (in rsi_54 : word64)
  Class: Eq_74
  DataType: word64
  OrigDataType: word64
T_75: (in rdi_55 : word64)
  Class: Eq_75
  DataType: word64
  OrigDataType: word64
T_76: (in 0x0000000000000000 : uint64)
  Class: Eq_76
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_77: (in r8 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_78: (in 0000000000601038 : ptr64)
  Class: Eq_78
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_79 t0000)))
T_79: (in Mem0[0x0000000000601038:byte] : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in 0x00 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_81: (in globals->b601038 != 0x00 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in deregister_tm_clones : ptr64)
  Class: Eq_82
  DataType: (ptr64 Eq_82)
  OrigDataType: (ptr64 (fn T_84 (T_77)))
T_83: (in signature of deregister_tm_clones : void)
  Class: Eq_82
  DataType: (ptr64 Eq_82)
  OrigDataType: 
T_84: (in deregister_tm_clones(r8) : void)
  Class: Eq_84
  DataType: void
  OrigDataType: void
T_85: (in 0x01 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_86: (in 0000000000601038 : ptr64)
  Class: Eq_86
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_87 t0000)))
T_87: (in Mem16[0x0000000000601038:byte] : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_88: (in r8 : word64)
  Class: Eq_60
  DataType: word64
  OrigDataType: word64
T_89: (in 0000000000600E08 : ptr64)
  Class: Eq_89
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_90 t0000)))
T_90: (in Mem0[0x0000000000600E08:word64] : word64)
  Class: Eq_90
  DataType: word64
  OrigDataType: word64
T_91: (in 0x0000000000000000 : word64)
  Class: Eq_90
  DataType: word64
  OrigDataType: word64
T_92: (in globals->qw600E08 == 0x0000000000000000 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in 0x0000000000000000 : uint64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: uint64
T_94: (in 0x0000000000000000 : word64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: word64
T_95: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in rsp_44 : word64)
  Class: Eq_96
  DataType: word64
  OrigDataType: word64
T_97: (in SCZO_45 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in Z_46 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in eax_47 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in rax_48 : word64)
  Class: Eq_100
  DataType: word64
  OrigDataType: word64
T_101: (in SZO_49 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in C_50 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in rbp_51 : word64)
  Class: Eq_103
  DataType: word64
  OrigDataType: word64
T_104: (in edi_52 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in rdi_53 : word64)
  Class: Eq_105
  DataType: word64
  OrigDataType: word64
T_106: (in r8_54 : word64)
  Class: Eq_60
  DataType: word64
  OrigDataType: word64
T_107: (in rdx_55 : word64)
  Class: Eq_107
  DataType: word64
  OrigDataType: word64
T_108: (in edx_56 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in rsi_57 : word64)
  Class: Eq_109
  DataType: word64
  OrigDataType: word64
T_110: (in fn0000000000000000 : ptr64)
  Class: Eq_110
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_111: (in signature of fn0000000000000000 : void)
  Class: Eq_111
  DataType: Eq_111
  OrigDataType: 
T_112: (in register_tm_clones : ptr64)
  Class: Eq_112
  DataType: (ptr64 Eq_112)
  OrigDataType: (ptr64 (fn T_114 (T_106)))
T_113: (in signature of register_tm_clones : void)
  Class: Eq_112
  DataType: (ptr64 Eq_112)
  OrigDataType: 
T_114: (in register_tm_clones(r8_54) : void)
  Class: Eq_114
  DataType: void
  OrigDataType: void
T_115: (in register_tm_clones : ptr64)
  Class: Eq_112
  DataType: (ptr64 Eq_112)
  OrigDataType: (ptr64 (fn T_116 (T_88)))
T_116: (in register_tm_clones(r8) : void)
  Class: Eq_114
  DataType: void
  OrigDataType: void
T_117: (in eax : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in rdi : (arr Eq_126))
  Class: Eq_118
  DataType: (ptr64 (arr Eq_126))
  OrigDataType: (ptr64 (struct (0 (arr T_267) a0000)))
T_119: (in dwLoc0C_126 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in 0x00000000 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_121: (in eax_122 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_122: (in (uint64) dwLoc0C_126 : uint64)
  Class: Eq_122
  DataType: uint64
  OrigDataType: uint64
T_123: (in (word32) (uint64) dwLoc0C_126 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in (int64) (word32) (uint64) dwLoc0C_126 : int64)
  Class: Eq_124
  DataType: int64
  OrigDataType: int64
T_125: (in rdi + (int64) ((word32) ((uint64) dwLoc0C_126)) : word64)
  Class: Eq_125
  DataType: (ptr64 Eq_126)
  OrigDataType: (ptr64 (struct (0 T_126 t0000)))
T_126: (in Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : byte)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: byte
T_127: (in (word32) Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in (byte) (word32) Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in 0x00 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_130: (in (byte) (word32) (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&rdi[(int64) (word32) (uint64) dwLoc0C_126].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0] != 0x00 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in al_73 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in (uint64) dwLoc0C_126 : uint64)
  Class: Eq_132
  DataType: uint64
  OrigDataType: uint64
T_133: (in (word32) (uint64) dwLoc0C_126 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in (uint64) dwLoc0C_126 : uint64)
  Class: Eq_134
  DataType: uint64
  OrigDataType: uint64
T_135: (in (word32) (uint64) dwLoc0C_126 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in (int64) (word32) (uint64) dwLoc0C_126 : int64)
  Class: Eq_136
  DataType: int64
  OrigDataType: int64
T_137: (in rdi + (int64) ((word32) ((uint64) dwLoc0C_126)) : word64)
  Class: Eq_137
  DataType: (ptr64 Eq_126)
  OrigDataType: (ptr64 (struct (0 T_138 t0000)))
T_138: (in Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : byte)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: byte
T_139: (in (word32) Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in (uint64) (word32) Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : uint64)
  Class: Eq_140
  DataType: uint64
  OrigDataType: uint64
T_141: (in (word32) (uint64) (word32) Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte] : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in (word32) (uint64) dwLoc0C_126 ^ (word32) ((uint64) ((word32) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&(rdi)[(int64) ((word32) ((uint64) dwLoc0C_126))].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000)[0])) : word32)
  Class: Eq_142
  DataType: ui32
  OrigDataType: ui32
T_143: (in (uint64) ((word32) (uint64) dwLoc0C_126 ^ (word32) ((uint64) ((word32) Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte]))) : uint64)
  Class: Eq_143
  DataType: uint64
  OrigDataType: uint64
T_144: (in (byte) (uint64) ((word32) (uint64) dwLoc0C_126 ^ (word32) ((uint64) ((word32) Mem0[rdi + (int64) ((word32) ((uint64) dwLoc0C_126)):byte]))) : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_145: (in rax_113 : uint64)
  Class: Eq_145
  DataType: uint64
  OrigDataType: uint64
T_146: (in (uint64) dwLoc0C_126 : uint64)
  Class: Eq_145
  DataType: uint64
  OrigDataType: uint64
T_147: (in (byte) rax_113 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in (int16) (byte) rax_113 : int16)
  Class: Eq_148
  DataType: int16
  OrigDataType: int16
T_149: (in DPB(rax_113, (int16) (byte) rax_113, 0) : word64)
  Class: Eq_149
  DataType: (ptr64 Eq_149)
  OrigDataType: (ptr64 (struct (601020 T_152 t601020)))
T_150: (in 0x0000000000601020 : word64)
  Class: Eq_150
  DataType: word64
  OrigDataType: word64
T_151: (in DPB(rax_113, (int16) (byte) rax_113, 0) + 0x0000000000601020 : word64)
  Class: Eq_151
  DataType: uint64
  OrigDataType: uint64
T_152: (in Mem0[DPB(rax_113, (int16) (byte) rax_113, 0) + 0x0000000000601020:byte] : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in (word32) Mem0[DPB(rax_113, (int16) (byte) rax_113, 0) + 0x0000000000601020:byte] : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in (byte) (word32) Mem0[DPB(rax_113, (int16) (byte) rax_113, 0) + 0x0000000000601020:byte] : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_155: (in (word32) al_73 : word32)
  Class: Eq_155
  DataType: int32
  OrigDataType: int32
T_156: (in 0x00000008 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in (uint64) dwLoc0C_126 : uint64)
  Class: Eq_157
  DataType: uint64
  OrigDataType: uint64
T_158: (in (word32) (uint64) dwLoc0C_126 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in 0x00000009 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in (word32) (uint64) dwLoc0C_126 ^ 0x00000009 : word32)
  Class: Eq_160
  DataType: ui32
  OrigDataType: ui32
T_161: (in (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) : uint64)
  Class: Eq_161
  DataType: uint64
  OrigDataType: uint64
T_162: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) : word32)
  Class: Eq_162
  DataType: ui32
  OrigDataType: ui32
T_163: (in 0x00000003 : word32)
  Class: Eq_163
  DataType: ui32
  OrigDataType: ui32
T_164: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003 : word32)
  Class: Eq_164
  DataType: ui32
  OrigDataType: ui32
T_165: (in (uint64) ((word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003) : uint64)
  Class: Eq_165
  DataType: uint64
  OrigDataType: uint64
T_166: (in (word32) (uint64) ((word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003) : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in (uint64) (word32) (uint64) ((word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003) : uint64)
  Class: Eq_167
  DataType: uint64
  OrigDataType: uint64
T_168: (in (word32) (uint64) (word32) (uint64) ((word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003) : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in 0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003)))) : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in (uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : uint64)
  Class: Eq_170
  DataType: uint64
  OrigDataType: uint64
T_171: (in (word32) (uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in (uint64) (word32) (uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : uint64)
  Class: Eq_172
  DataType: uint64
  OrigDataType: uint64
T_173: (in (byte) (uint64) (word32) (uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in (word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003)))))))) : word32)
  Class: Eq_174
  DataType: int32
  OrigDataType: int32
T_175: (in (uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))) : uint64)
  Class: Eq_175
  DataType: uint64
  OrigDataType: uint64
T_176: (in (word32) (uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))) : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in (uint64) (word32) (uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))) : uint64)
  Class: Eq_177
  DataType: uint64
  OrigDataType: uint64
T_178: (in (word32) (uint64) (word32) (uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))) : word32)
  Class: Eq_178
  DataType: ui32
  OrigDataType: ui32
T_179: (in (word32) al_73 : word32)
  Class: Eq_179
  DataType: ui32
  OrigDataType: ui32
T_180: (in (uint64) dwLoc0C_126 : uint64)
  Class: Eq_180
  DataType: uint64
  OrigDataType: uint64
T_181: (in (word32) (uint64) dwLoc0C_126 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in 0x00000009 : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in (word32) (uint64) dwLoc0C_126 ^ 0x00000009 : word32)
  Class: Eq_183
  DataType: ui32
  OrigDataType: ui32
T_184: (in (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) : uint64)
  Class: Eq_184
  DataType: uint64
  OrigDataType: uint64
T_185: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) : word32)
  Class: Eq_185
  DataType: ui32
  OrigDataType: ui32
T_186: (in 0x00000003 : word32)
  Class: Eq_186
  DataType: ui32
  OrigDataType: ui32
T_187: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003 : word32)
  Class: Eq_187
  DataType: ui32
  OrigDataType: ui32
T_188: (in (uint64) ((word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003) : uint64)
  Class: Eq_188
  DataType: uint64
  OrigDataType: uint64
T_189: (in (word32) (uint64) ((word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003) : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in (uint64) (word32) (uint64) ((word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003) : uint64)
  Class: Eq_190
  DataType: uint64
  OrigDataType: uint64
T_191: (in (byte) (uint64) (word32) (uint64) ((word32) (uint64) ((word32) (uint64) dwLoc0C_126 ^ 0x00000009) & 0x00000003) : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in (word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003)))) : word32)
  Class: Eq_192
  DataType: ui32
  OrigDataType: ui32
T_193: (in (uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : uint64)
  Class: Eq_193
  DataType: uint64
  OrigDataType: uint64
T_194: (in (word32) (uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in (uint64) (word32) (uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : uint64)
  Class: Eq_195
  DataType: uint64
  OrigDataType: uint64
T_196: (in (word32) (uint64) (word32) (uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in (uint64) (word32) (uint64) (word32) (uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : uint64)
  Class: Eq_197
  DataType: uint64
  OrigDataType: uint64
T_198: (in (word32) (uint64) (word32) (uint64) (word32) (uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))) : word32)
  Class: Eq_198
  DataType: ui32
  OrigDataType: ui32
T_199: (in (word32) (uint64) (word32) (uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003)))))))))) : word32)
  Class: Eq_199
  DataType: ui32
  OrigDataType: ui32
T_200: (in (uint64) ((word32) (uint64) (word32) (uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))))) : uint64)
  Class: Eq_200
  DataType: uint64
  OrigDataType: uint64
T_201: (in (byte) (uint64) ((word32) (uint64) (word32) (uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))))) : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in 0x08 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in (byte) (uint64) ((word32) (uint64) (word32) (uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003))))))))))) + 0x08 : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_204: (in (byte) (word32) (DPB(rax_113, (int16) (byte) rax_113, 0) + 0x0000000000601020) == (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_73 >> (byte) ((uint64) ((word32) ((uint64) (0x00000008 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003)))))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_73 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_126) ^ 0x00000009)) & 0x00000003)))))))))))) + 0x08 : bool)
  Class: Eq_204
  DataType: bool
  OrigDataType: bool
T_205: (in 0x00000017 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_206: (in dwLoc0C_126 == 0x00000017 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in (word32) (dwLoc0C_126 == 0x00000017) : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_208: (in 0x00000001 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in dwLoc0C_126 + 0x00000001 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_210: (in 0x00000000 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_211: (in rsi : (ptr64 Eq_211))
  Class: Eq_211
  DataType: (ptr64 Eq_211)
  OrigDataType: (ptr64 (struct (8 T_219 t0008)))
T_212: (in edi : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in 0x00000002 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_214: (in edi == 0x00000002 : bool)
  Class: Eq_214
  DataType: bool
  OrigDataType: bool
T_215: (in verify : ptr64)
  Class: Eq_215
  DataType: (ptr64 Eq_215)
  OrigDataType: (ptr64 (fn T_220 (T_219)))
T_216: (in signature of verify : void)
  Class: Eq_215
  DataType: (ptr64 Eq_215)
  OrigDataType: 
T_217: (in 0x0000000000000008 : word64)
  Class: Eq_217
  DataType: word64
  OrigDataType: word64
T_218: (in rsi + 0x0000000000000008 : word64)
  Class: Eq_218
  DataType: word64
  OrigDataType: word64
T_219: (in Mem0[rsi + 0x0000000000000008:word64] : word64)
  Class: Eq_118
  DataType: (ptr64 (arr Eq_126))
  OrigDataType: word64
T_220: (in verify(rsi->ptr0008) : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_221: (in 0x00000000 : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_222: (in verify(rsi->ptr0008) == 0x00000000 : bool)
  Class: Eq_222
  DataType: bool
  OrigDataType: bool
T_223: (in puts : ptr64)
  Class: Eq_223
  DataType: (ptr64 Eq_223)
  OrigDataType: (ptr64 (fn T_227 (T_226)))
T_224: (in signature of puts : void)
  Class: Eq_223
  DataType: (ptr64 Eq_223)
  OrigDataType: 
T_225: (in s : (ptr64 char))
  Class: Eq_225
  DataType: (ptr64 char)
  OrigDataType: 
T_226: (in 0x00000000004006C8 : uint64)
  Class: Eq_225
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_227: (in puts("You need to enter the secret key!") : int32)
  Class: Eq_227
  DataType: int32
  OrigDataType: int32
T_228: (in puts : ptr64)
  Class: Eq_223
  DataType: (ptr64 Eq_223)
  OrigDataType: (ptr64 (fn T_230 (T_229)))
T_229: (in 0x0000000000400718 : uint64)
  Class: Eq_225
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_230: (in puts("I'm sorry, that's the wrong secret key!") : int32)
  Class: Eq_227
  DataType: int32
  OrigDataType: int32
T_231: (in puts : ptr64)
  Class: Eq_223
  DataType: (ptr64 Eq_223)
  OrigDataType: (ptr64 (fn T_233 (T_232)))
T_232: (in 0x00000000004006F0 : uint64)
  Class: Eq_225
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_233: (in puts("Correct! that is the secret key!") : int32)
  Class: Eq_227
  DataType: int32
  OrigDataType: int32
T_234: (in edi : word32)
  Class: Eq_234
  DataType: word32
  OrigDataType: word32
T_235: (in _init : ptr64)
  Class: Eq_235
  DataType: (ptr64 Eq_235)
  OrigDataType: (ptr64 (fn T_237 ()))
T_236: (in signature of _init : void)
  Class: Eq_235
  DataType: (ptr64 Eq_235)
  OrigDataType: 
T_237: (in _init() : void)
  Class: Eq_237
  DataType: void
  OrigDataType: void
T_238: (in 0000000000600E00 : ptr64)
  Class: Eq_238
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_239: (in 0000000000600DF8 : ptr64)
  Class: Eq_239
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_240: (in 0x0000000000600E00 - 0x0000000000600DF8 : word64)
  Class: Eq_240
  DataType: int64
  OrigDataType: int64
T_241: (in 0x0000000000000003 : word64)
  Class: Eq_241
  DataType: word64
  OrigDataType: word64
T_242: (in 0x0000000000600E00 - 0x0000000000600DF8 >> 0x0000000000000003 : word64)
  Class: Eq_242
  DataType: int64
  OrigDataType: int64
T_243: (in 0x0000000000000000 : word64)
  Class: Eq_242
  DataType: int64
  OrigDataType: word64
T_244: (in 0x0000000000600E00 - 0x0000000000600DF8 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_244
  DataType: bool
  OrigDataType: bool
T_245: (in rsp_60 : word64)
  Class: Eq_245
  DataType: word64
  OrigDataType: word64
T_246: (in rbp_61 : word64)
  Class: Eq_246
  DataType: word64
  OrigDataType: word64
T_247: (in r12_62 : word64)
  Class: Eq_247
  DataType: word64
  OrigDataType: word64
T_248: (in r13_63 : word64)
  Class: Eq_248
  DataType: word64
  OrigDataType: word64
T_249: (in r14_64 : word64)
  Class: Eq_249
  DataType: word64
  OrigDataType: word64
T_250: (in r15_65 : word64)
  Class: Eq_250
  DataType: word64
  OrigDataType: word64
T_251: (in rbx_66 : word64)
  Class: Eq_251
  DataType: word64
  OrigDataType: word64
T_252: (in SCZO_67 : byte)
  Class: Eq_252
  DataType: byte
  OrigDataType: byte
T_253: (in r13d_68 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in edi_69 : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in rsi_70 : word64)
  Class: Eq_255
  DataType: word64
  OrigDataType: word64
T_256: (in rdx_71 : word64)
  Class: Eq_256
  DataType: word64
  OrigDataType: word64
T_257: (in SZO_72 : byte)
  Class: Eq_257
  DataType: byte
  OrigDataType: byte
T_258: (in C_73 : bool)
  Class: Eq_258
  DataType: bool
  OrigDataType: bool
T_259: (in Z_74 : bool)
  Class: Eq_259
  DataType: bool
  OrigDataType: bool
T_260: (in ebx_75 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in rdi_76 : word64)
  Class: Eq_261
  DataType: word64
  OrigDataType: word64
T_262: (in 0000000000600DF8 : ptr64)
  Class: Eq_262
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_263 t0000)))
T_263: (in Mem0[0x0000000000600DF8:word64] : word64)
  Class: Eq_263
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_264: (in 0x0000000000000001 : word64)
  Class: Eq_264
  DataType: word64
  OrigDataType: word64
T_265: (in rbx_66 + 0x0000000000000001 : word64)
  Class: Eq_246
  DataType: word64
  OrigDataType: word64
T_266: (in rbx_66 + 0x0000000000000001 != rbp_61 : bool)
  Class: Eq_266
  DataType: bool
  OrigDataType: bool
T_267:
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: (struct 0001 (0 T_126 t0000))
T_268:
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: (arr T_126)
T_269:
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: (struct 0001 (0 T_138 t0000))
T_270:
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: (arr T_269)
*/
typedef struct Globals {
	Eq_16 t4005C5;	// 4005C5
	Eq_19 t400620;	// 400620
	Eq_20 t4006B0;	// 4006B0
	char str4006C8[];	// 4006C8
	char str4006F0[];	// 4006F0
	char str400718[];	// 400718
	<anonymous> * ptr600DF8;	// 600DF8
	word64 qw600E08;	// 600E08
	byte b601038;	// 601038
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef union Eq_6 {
	int32 u0;
	word64 u1;
} Eq_6;

typedef void (Eq_7)(ptr64);

typedef int32 (Eq_14)( *, Eq_6, char * *,  *,  *,  *, void);

typedef int32 (Eq_16)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_19)();

typedef void (Eq_20)();

typedef void (Eq_28)();

typedef void (Eq_82)(word64);

typedef void (Eq_112)(word64);

typedef struct Eq_126 {	// size: 1 1
	Eq_126 a0000[];	// 0
} Eq_126;

typedef struct Eq_149 {
	byte b601020;	// 601020
} Eq_149;

typedef struct Eq_211 {
	Eq_126 (* ptr0008)[];	// 8
} Eq_211;

typedef word32 (Eq_215)(Eq_126 *[]);

typedef int32 (Eq_223)(char *);

typedef void (Eq_235)();

typedef union Eq_238 {
	int64 u0;
	ptr64 u1;
} Eq_238;

typedef union Eq_239 {
	int64 u0;
	ptr64 u1;
} Eq_239;

