// main.c
// Generated by decompiling main.exe
// using Reko decompiler version 0.8.2.0.

#include "main.h"

// 00401000: void fn00401000()
void fn00401000()
{
}

// 00401010: void fn00401010(Stack word32 dwArg04)
void fn00401010(word32 dwArg04)
{
	word32 esp_n;
	word32 ebp_n;
	word32 esi_n;
	byte SCZO_n;
	word32 ecx_n;
	word32 eax_n;
	_acrt_iob_func();
	fn00401000();
	word32 esp_n;
	word32 ebp_n;
	word32 esi_n;
	byte SCZO_n;
	word32 ecx_n;
	word32 eax_n;
	_stdio_common_vfprintf();
}

// 00401040: Register word32 fn00401040(Register out ptr32 ebpOut)
word32 fn00401040(ptr32 & ebpOut)
{
	word32 esp_n;
	word32 ebp_n;
	word32 ecx_n;
	word32 eax_n;
	byte SCZO_n;
	byte SZO_n;
	bool C_n;
	driver.dll!Ordinal_n();
	word32 esp_n;
	word32 ebp_n;
	word32 ecx_n;
	word32 eax_n;
	byte SCZO_n;
	byte SZO_n;
	bool C_n;
	driver.dll!Ordinal_n();
	word32 esp_n;
	word32 ebp_n;
	word32 ecx_n;
	word32 eax_n;
	byte SCZO_n;
	byte SZO_n;
	bool C_n;
	driver.dll!Ordinal_n();
	word32 esp_n;
	word32 ebp_n;
	word32 ecx_n;
	word32 eax_n;
	byte SCZO_n;
	byte SZO_n;
	bool C_n;
	driver.dll!Ordinal_n();
	fn00401010(0x00402118);
	word32 ebp_n;
	*ebpOut = ebp;
	return 0x00;
}

// 004012C9: Register Eq_n Win32CrtStartup()
DWORD Win32CrtStartup()
{
	fn0040165E();
	struct Eq_n * ebp_n = fn00401980(ebx, esi, edi, dwLoc0C, 0x00402508, 0x14);
	word32 * esp_n = fp - 0x08;
	if (fn0040146F(edx, 0x01) == 0x00)
	{
l00401172:
		esp_n -= 0x04;
		*esp_n = 0x07;
		fn0040176D(0x14, dwArg00);
	}
	*(ebp_n - 0x19) = 0x00;
	*(ebp_n - 0x04) &= 0x00;
	*(ebp_n - 0x24) = fn0040143A();
	ebx = DPB(ebx, 0x00, 0);
	word32 eax_n = globals->dw403334;
	if (eax_n != 0x01)
	{
		Eq_n eax_n;
		if (eax_n == 0x00)
		{
			globals->dw403334 = 0x01;
			PVFV ** esp_n = esp_n - 0x04;
			*esp_n = (PVFV **) &globals->t4020F0;
			*(esp_n - 0x04) = 0x004020E4;
			if (_initterm_e(*(esp_n - 0x04), *esp_n) != 0x00)
			{
				*(ebp_n - 0x04) = ~0x01;
				eax_n = 0xFF;
				goto l004012C3;
			}
			*esp_n = (PVFV **) &globals->t4020E0;
			*(esp_n - 0x04) = 0x004020D8;
			_initterm(*(esp_n - 0x04), *esp_n);
			globals->dw403334 = 0x02;
		}
		else
		{
			*(ebp_n - 0x19) = 0x01;
			ebx = DPB(ebx, 0x01, 0);
		}
		ptr32 * esp_n = esp_n - 0x04;
		*esp_n = *(ebp_n - 0x24);
		fn004015C9(bArg00);
		fn00401761();
		ptr32 esp_n = esp_n + 0x01;
		ptr32 edi_n = 0x00;
		if (globals->dw403384 != 0x00)
		{
			*esp_n = 0x00403384;
			<anonymous> ** esi_n;
			word32 eax_n = fn0040153F(ebx, 0x00403384, 0x00, out ebx, out esi_n, out edi_n);
			byte al_n = (byte) eax_n;
			esp_n = esp_n + 0x01;
			if (al_n != 0x00)
			{
				*esp_n = edi_n;
				*(esp_n - 0x04) = 0x02;
				*(esp_n - 0x08) = edi_n;
				<anonymous> * esi_n = *esi_n;
				fn00401972();
				word32 ecx_n;
				byte al_n;
				byte SZO_n;
				bool C_n;
				bool Z_n;
				byte bl_n;
				word32 ebp_n;
				word32 eax_n;
				byte SCZO_n;
				byte cl_n;
				word32 esi_n;
				word32 edx_n;
				esi_n();
			}
		}
		word32 eax_n = fn00401767();
		if (globals->ptr403380 != edi_n)
		{
			ptr32 * esp_n = esp_n - 0x04;
			*esp_n = 0x00403380;
			word32 ebx_n;
			ptr32 * esi_n;
			word32 edi_n;
			word32 eax_n = fn0040153F(ebx, 0x00403380, edi_n, out ebx_n, out esi_n, out edi_n);
			byte al_n = (byte) eax_n;
			if (al_n != 0x00)
			{
				*esp_n = *esi_n;
				word32 esp_n;
				word32 ecx_n;
				byte al_n;
				byte SZO_n;
				bool C_n;
				bool Z_n;
				byte bl_n;
				word32 ebp_n;
				word32 eax_n;
				byte SCZO_n;
				byte cl_n;
				word32 esi_n;
				word32 edi_n;
				word32 ebx_n;
				word32 edx_n;
				register_thread_local_exe_atexit_callback();
			}
		}
		word32 esp_n;
		word32 ecx_n;
		byte al_n;
		byte SZO_n;
		bool C_n;
		bool Z_n;
		byte bl_n;
		word32 ebp_n;
		word32 eax_n;
		byte SCZO_n;
		byte cl_n;
		word32 esi_n;
		word32 edi_n;
		word32 ebx_n;
		word32 edx_n;
		_p___argv();
		word32 esp_n;
		word32 ecx_n;
		byte al_n;
		byte SZO_n;
		bool C_n;
		bool Z_n;
		byte bl_n;
		word32 ebp_n;
		word32 eax_n;
		byte SCZO_n;
		byte cl_n;
		word32 esi_n;
		word32 edi_n;
		word32 ebx_n;
		word32 edx_n;
		_p___argc();
		ptr32 esp_n;
		word32 ecx_n;
		byte al_n;
		byte SZO_n;
		bool C_n;
		bool Z_n;
		byte bl_n;
		word32 ebp_n;
		word32 eax_n;
		byte SCZO_n;
		byte cl_n;
		word32 * esi_n;
		word32 * edi_n;
		word32 ebx_n;
		word32 edx_n;
		get_initial_narrow_environment();
		*(esp_n - 0x04) = eax_n;
		*(esp_n - 0x08) = *edi_n;
		*(esp_n - 0x0C) = *esi_n;
		Eq_n eax_n = fn00401040(out ebp_n);
		ptr32 esp_n = esp_n;
		Eq_n esi_n = eax_n;
		byte al_n = fn0040188B();
		if (al_n == 0x00)
		{
			*(esp_n - 0x04) = (uint32) eax_n;
			exit(*(esp_n - 0x04));
		}
		if (bl_n == 0x00)
		{
			word32 ecx_n;
			byte al_n;
			byte SZO_n;
			bool C_n;
			bool Z_n;
			byte bl_n;
			word32 eax_n;
			byte SCZO_n;
			byte cl_n;
			word32 edi_n;
			word32 ebx_n;
			word32 edx_n;
			cexit();
		}
		word32 * esp_n = esp_n - 0x04;
		*esp_n = 0x00;
		*(esp_n - 0x04) = 0x01;
		fn004015E6(dwArg00, bArg04);
		*(ebp_n - 0x04) = ~0x01;
		eax_n = esi_n;
l004012C3:
		word32 esi_n;
		word32 edi_n;
		fn004019C6(ebp_n, 0x14, dwArg00, dwArg04, dwArg08, dwArg0C, out esi_n, out edi_n);
		return eax_n;
	}
	goto l00401172;
}

// 004013F6: Register (ptr32 Eq_n) fn004013F6(Stack (ptr32 Eq_n) dwArg04, Stack uint32 dwArg08)
Eq_n * fn004013F6(Eq_n * dwArg04, uint32 dwArg08)
{
	struct Eq_n * eax_n;
	struct Eq_n * ecx_n = dwArg04 + dwArg04->dw003C / 0x0040;
	struct Eq_n * edx_n = &ecx_n->w0014 + 0x02 + (word32) ecx_n->w0014 / 22;
	struct Eq_n * esi_n = edx_n + (word32) ecx_n->w0006;
	for (; edx_n != esi_n; ++edx_n)
	{
		if (dwArg08 >= edx_n->dw000C && dwArg08 < edx_n->dw0008 + edx_n->dw000C)
		{
			eax_n = edx_n;
			return eax_n;
		}
	}
	eax_n = null;
	return eax_n;
}

// 0040143A: Register byte fn0040143A()
byte fn0040143A()
{
	if (fn00401B98() == 0x00)
		return 0x00;
	word32 edx_n = fs->ptr0018->dw0004;
	do
	{
		__lock();
		word32 eax_n;
		__cmpxchg(globals->dw403338, edx_n, 0x00, out eax_n);
		if (eax_n == 0x00)
			return 0x00;
	} while (edx_n != eax_n);
	return 0x01;
}

// 0040146F: Register byte fn0040146F(Register word32 edx, Stack word32 dwArg04)
byte fn0040146F(word32 edx, word32 dwArg04)
{
	if (dwArg04 == 0x00)
		globals->b403354 = 0x01;
	fn004019FE(edx);
	fn00401C46();
	if (false)
		return 0x00;
	fn00401C46();
	if (true)
		return 0x01;
	fn00401C46();
	return 0x00;
}

// 0040153F: Register (ptr32 Eq_n) fn0040153F(Register word32 ebx, Register ptr32 esi, Register ptr32 edi, Register out ptr32 ebxOut, Register out ptr32 esiOut, Register out ptr32 ediOut)
Eq_n * fn0040153F(word32 ebx, ptr32 esi, ptr32 edi, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	struct Eq_n * eax_n;
	struct Eq_n * ebp_n = fn00401980(ebx, esi, edi, dwLoc0C, 0x00402528, 0x08);
	*(ebp_n - 0x04) &= 0x00;
	struct Eq_n * eax_n = (struct Eq_n *) 23117;
	if (globals->w400000 == 23117)
	{
		eax_n = globals->ptr40003C;
		if (eax_n->dw400000 == 0x4550 && eax_n->w400018 == 0x010B)
		{
			ui32 eax_n = ebp_n->dw0008;
			dwLoc0C = eax_n - 0x00400000;
			eax_n = fn004013F6(&globals->w400000, eax_n - 0x00400000);
			if (eax_n != null && eax_n->dw0024 >= 0x00)
			{
				*(ebp_n - 0x04) = ~0x01;
				eax_n = (struct Eq_n *) DPB(eax_n, 0x01, 0);
l004015C3:
				word32 esi_n;
				word32 edi_n;
				word32 ebx_n;
				*ebxOut = fn004019C6(ebp_n, dwLoc0C, 0x00402528, 0x08, dwArg00, dwArg04, out esi_n, out edi_n);
				return eax_n;
			}
		}
	}
	*(ebp_n - 0x04) = ~0x01;
	eax_n = (struct Eq_n *) DPB(eax_n, 0x00, 0);
	goto l004015C3;
}

// 004015C9: void fn004015C9(Stack byte bArg04)
void fn004015C9(byte bArg04)
{
	if (fn00401B98() != 0x00 && bArg04 == 0x00)
		globals->dw403338 = 0x00;
}

// 004015E6: void fn004015E6(Stack word32 dwArg04, Stack byte bArg08)
void fn004015E6(word32 dwArg04, byte bArg08)
{
	if (globals->b403354 == 0x00 || bArg08 == 0x00)
	{
		fn00401C46();
		fn00401C46();
	}
}

// 0040165E: void fn0040165E()
void fn0040165E()
{
	ui32 eax_n = globals->dw403004;
	if (eax_n != 0xBB40E64E && (eax_n & 0xFFFF0000) != 0x00)
		globals->dw403000 = ~eax_n;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x10);
		ui32 v14_n = dwLoc0C & 0x00 ^ dwLoc10 & 0x00 ^ GetCurrentThreadId() ^ GetCurrentProcessId();
		QueryPerformanceCounter(fp - 0x18);
		ui32 ecx_n = dwLoc14 ^ dwLoc18 ^ v14_n ^ fp - 0x08;
		if (ecx_n == 0xBB40E64E)
			ecx_n = ~0x44BF19B0;
		else if ((ecx_n & 0xFFFF0000) == 0x00)
			ecx_n |= (ecx_n | 0x4711) << 0x10;
		globals->dw403004 = ecx_n;
		globals->dw403000 = ~ecx_n;
	}
}

// 00401761: void fn00401761()
void fn00401761()
{
}

// 00401767: Register ptr32 fn00401767()
ptr32 fn00401767()
{
	return 0x00403380;
}

// 0040176D: void fn0040176D(Stack word32 dwArg00, Stack word32 dwArg04)
void fn0040176D(word32 dwArg00, word32 dwArg04)
{
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		globals->dw403368 = 0x00;
		memset(fp - 808, 0x00, 0x02CC);
		memset(fp - 0x5C, 0x00, 0x50);
		byte bl_n = 0x00 - (IsDebuggerPresent() == 0x01);
		SetUnhandledExceptionFilter(null);
		if (UnhandledExceptionFilter(fp - 0x0C) == 0x00)
			globals->dw403368 &= 0x00 - (-((word32) (bl_n + 0x01)) == 0x00);
	}
	else
		__fastfail(dwArg04);
}

// 0040188B: Register Eq_n fn0040188B()
Eq_n fn0040188B()
{
	Eq_n eax_n = GetModuleHandleW(null);
	if (eax_n == null || eax_n->unused != 23117)
		return 0x00;
	struct Eq_n * eax_n = eax_n + eax_n->dw003C / 0x0040;
	if (eax_n->dw0000 != 0x4550 || (eax_n->w0018 != 0x010B || eax_n->dw0074 <= 0x0E))
		return 0x00;
	return eax_n->dw00E8 != 0x00;
}

// 00401972: void fn00401972()
void fn00401972()
{
	word32 esp_n;
	globals->ptr4020D4();
}

// 00401980: Register ptr32 fn00401980(Register word32 ebx, Register ptr32 esi, Register ptr32 edi, Stack ui32 dwArg00, Stack word32 dwArg04, Stack ui32 dwArg08)
ptr32 fn00401980(word32 ebx, ptr32 esi, ptr32 edi, ui32 dwArg00, word32 dwArg04, ui32 dwArg08)
{
	ptr32 esp_n = fp - 0x08 - dwArg08;
	*(esp_n - 0x04) = ebx;
	*(esp_n - 0x08) = esi;
	*(esp_n - 0x0C) = edi;
	*(esp_n - 0x0010) = globals->dw403004 ^ fp + 0x08;
	*(esp_n - 0x0014) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 004019C6: Register word32 fn004019C6(Register (ptr32 Eq_n) ebp, Stack ui32 dwArg00, Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10, Register out ptr32 esiOut, Register out ptr32 ediOut)
word32 fn004019C6(Eq_n * ebp, ui32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 & esiOut, ptr32 & ediOut)
{
	fs->dw0000 = *(ebp - 0x10);
	ebp->dw0000 = dwArg00;
	word32 edi_n;
	*ediOut = dwArg08;
	word32 esi_n;
	*esiOut = dwArg0C;
	return dwArg10;
}

// 004019FE: void fn004019FE(Register word32 edx)
void fn004019FE(word32 edx)
{
	globals->dw40336C &= 0x00;
	globals->dw403010 |= 0x01;
	if (IsProcessorFeaturePresent(0x0A) != 0x00)
	{
		ui32 edi_n;
		globals->dw403010 |= 0x02;
		globals->dw40336C = 0x01;
		int32 eax_n;
		word32 ebx_n;
		word32 ecx_n;
		word32 edx_n;
		__cpuid(0x00, 0x00, &eax_n, &ebx_n, &ecx_n, &edx_n);
		ui32 eax_n;
		word32 ebx_n;
		ui32 ecx_n;
		word32 edx_n;
		__cpuid(0x01, 0x00, &eax_n, &ebx_n, &ecx_n, &edx_n);
		if ((edx_n ^ 0x49656E69 | ecx_n ^ 1818588270 | ebx_n ^ 1970169159) == 0x00 && ((eax_n & 0x0FFF3FF0) == 0x000106C0 || ((eax_n & 0x0FFF3FF0) == 0x00020660 || ((eax_n & 0x0FFF3FF0) == 0x00020670 || ((eax_n & 0x0FFF3FF0) == 0x00030650 || ((eax_n & 0x0FFF3FF0) == 0x00030660 || (eax_n & 0x0FFF3FF0) == 0x00030670))))))
		{
			ui32 edi_n = globals->dw403370;
			globals->dw403370 = edi_n | 0x01;
			edi_n = edi_n | 0x01;
		}
		else
			edi_n = globals->dw403370;
		if (eax_n >= 0x07)
		{
			word32 eax_n;
			ui32 ebx_n;
			word32 ecx_n;
			word32 edx_n;
			__cpuid(0x07, 0x00, &eax_n, &ebx_n, &ecx_n, &edx_n);
			if ((ebx_n & 0x0200) != 0x00)
				globals->dw403370 = edi_n | 0x02;
		}
		if ((ecx_n & 0x00100000) != 0x00)
		{
			globals->dw403010 |= 0x04;
			globals->dw40336C = 0x02;
			if ((ecx_n & 0x08000000) != 0x00 && ((ecx_n & 0x10000000) != 0x00 && (((word32) __xgetbv(0x00) & 0x06) == 0x06 && true)))
			{
				ui32 eax_n = globals->dw403010;
				globals->dw40336C = 0x03;
				globals->dw403010 = eax_n | 0x08;
				if ((bLoc14 & 0x20) != 0x00)
				{
					globals->dw40336C = 0x05;
					globals->dw403010 = eax_n | 0x08 | 0x20;
				}
			}
		}
	}
}

// 00401B98: Register word32 fn00401B98()
word32 fn00401B98()
{
	return (word32) (globals->dw403014 != 0x00);
}

// 00401C46: void fn00401C46()
void fn00401C46()
{
}

