// main.c
// Generated by decompiling main.exe
// using Reko decompiler version 0.7.2.0.

#include "main.h"

// 00401000: void fn00401000()
void fn00401000()
{
	return;
}

// 00401010: Register word32 fn00401010(Stack word32 dwArg04)
word32 fn00401010(word32 dwArg04)
{
	word32 esp_13;
	word32 ebp_14;
	word32 esi_15;
	byte SCZO_16;
	word32 ecx_17;
	word32 eax_18;
	_acrt_iob_func();
	fn00401000();
	word32 esp_37;
	word32 ebp_38;
	word32 esi_39;
	byte SCZO_40;
	word32 ecx_41;
	word32 eax_42;
	_stdio_common_vfprintf();
	return ebp;
}

// 00401040: Register word32 fn00401040()
word32 fn00401040()
{
	word32 esp_10;
	word32 ebp_11;
	word32 ecx_12;
	word32 eax_13;
	byte SCZO_14;
	byte SZO_15;
	byte C_16;
	driver.dll!Ordinal_1();
	word32 esp_20;
	word32 ebp_21;
	word32 ecx_22;
	word32 eax_23;
	byte SCZO_24;
	byte SZO_25;
	byte C_26;
	driver.dll!Ordinal_2();
	word32 esp_30;
	word32 ebp_31;
	word32 ecx_32;
	word32 eax_33;
	byte SCZO_34;
	byte SZO_35;
	byte C_36;
	driver.dll!Ordinal_4();
	word32 esp_40;
	word32 ebp_41;
	word32 ecx_42;
	word32 eax_43;
	byte SCZO_44;
	byte SZO_45;
	byte C_46;
	driver.dll!Ordinal_3();
	fn00401010(0x00402118);
	return 0x00;
}

// 004012C9: Register Eq_61 Win32CrtStartup()
DWORD Win32CrtStartup()
{
	fn0040165E();
	struct Eq_65 * ebp_10 = fn00401980(ebx, esi, edi, dwLoc0C, 0x00402508, 0x14);
	*(fp - 0x0C) = 0x01;
	word32 * esp_17 = fp - 0x08;
	if (fn0040146F(edx, dwArg00) == 0x00)
	{
l00401172:
		esp_17 = esp_17 - 0x04;
		*esp_17 = 0x07;
		fn0040176D(0x14, dwArg00);
	}
	*(ebp_10 - 0x19) = 0x00;
	*(ebp_10 - 0x04) = *(ebp_10 - 0x04) & 0x00;
	*(ebp_10 - 0x24) = fn0040143A();
	ebx = DPB(ebx, 0x00, 0);
	word32 eax_36 = globals->dw403334;
	if (eax_36 != 0x01)
	{
		Eq_61 eax_185;
		if (eax_36 == 0x00)
		{
			globals->dw403334 = 0x01;
			PVFV ** esp_270 = esp_17 - 0x04;
			*esp_270 = (PVFV **) &globals->t4020F0;
			*(esp_270 - 0x04) = 0x004020E4;
			if (_initterm_e(*(esp_270 - 0x04), *esp_270) != 0x00)
			{
				*(ebp_10 - 0x04) = ~0x01;
				eax_185 = 0xFF;
				goto l004012C3;
			}
			*esp_270 = (PVFV **) &globals->t4020E0;
			*(esp_270 - 0x04) = 0x004020D8;
			_initterm(*(esp_270 - 0x04), *esp_270);
			globals->dw403334 = 0x02;
		}
		else
		{
			*(ebp_10 - 0x19) = 0x01;
			ebx = DPB(ebx, 0x01, 0);
		}
		ptr32 * esp_71 = esp_17 - 0x04;
		*esp_71 = *(ebp_10 - 0x24);
		fn004015C9(bArg00);
		fn00401761();
		ptr32 esp_242 = esp_71 + 0x01;
		ptr32 edi_238 = 0x00;
		if (globals->dw403384 != 0x00)
		{
			*esp_71 = 0x00403384;
			<anonymous> ** esi_237;
			word32 eax_239 = fn0040153F(ebx, 0x00403384, 0x00, out ebx, out esi_237, out edi_238);
			byte al_240 = (byte) eax_239;
			esp_242 = esp_71 + 0x01;
			if (al_240 != 0x00)
			{
				*esp_71 = edi_238;
				*(esp_71 - 0x04) = 0x02;
				*(esp_71 - 0x08) = edi_238;
				<anonymous> * esi_252 = *esi_237;
				fn00401972();
				word32 ecx_255;
				byte al_256;
				byte SZO_257;
				byte C_258;
				byte Z_259;
				byte bl_260;
				word32 ebp_261;
				word32 eax_262;
				byte SCZO_263;
				byte cl_264;
				word32 esi_265;
				word32 edx_268;
				esi_252();
			}
		}
		word32 eax_90 = fn00401767();
		if (globals->ptr403380 != edi_238)
		{
			ptr32 * esp_202 = esp_242 - 0x04;
			*esp_202 = 0x00403380;
			word32 ebx_204;
			ptr32 * esi_205;
			word32 edi_206;
			word32 eax_207 = fn0040153F(ebx, 0x00403380, edi_238, out ebx_204, out esi_205, out edi_206);
			byte al_208 = (byte) eax_207;
			if (al_208 != 0x00)
			{
				*esp_202 = *esi_205;
				word32 esp_217;
				word32 ecx_218;
				byte al_219;
				byte SZO_220;
				byte C_221;
				byte Z_222;
				byte bl_223;
				word32 ebp_224;
				word32 eax_225;
				byte SCZO_226;
				byte cl_227;
				word32 esi_228;
				word32 edi_229;
				word32 ebx_230;
				word32 edx_231;
				register_thread_local_exe_atexit_callback();
			}
		}
		word32 esp_95;
		word32 ecx_96;
		byte al_97;
		byte SZO_98;
		byte C_99;
		byte Z_100;
		byte bl_101;
		word32 ebp_102;
		word32 eax_103;
		byte SCZO_104;
		byte cl_105;
		word32 esi_106;
		word32 edi_107;
		word32 ebx_108;
		word32 edx_109;
		_p___argv();
		word32 esp_111;
		word32 ecx_112;
		byte al_113;
		byte SZO_114;
		byte C_115;
		byte Z_116;
		byte bl_117;
		word32 ebp_118;
		word32 eax_119;
		byte SCZO_120;
		byte cl_121;
		word32 esi_122;
		word32 edi_123;
		word32 ebx_124;
		word32 edx_125;
		_p___argc();
		ptr32 esp_127;
		word32 ecx_128;
		byte al_129;
		byte SZO_130;
		byte C_131;
		byte Z_132;
		byte bl_133;
		word32 eax_135;
		byte SCZO_136;
		byte cl_137;
		word32 * esi_138;
		word32 * edi_139;
		word32 ebx_140;
		word32 edx_141;
		get_initial_narrow_environment();
		*(esp_127 - 0x04) = eax_135;
		*(esp_127 - 0x08) = *edi_139;
		*(esp_127 - 0x0C) = *esi_138;
		Eq_61 eax_150 = fn00401040();
		ptr32 esp_151 = esp_127;
		Eq_61 esi_153 = eax_150;
		byte al_154 = fn0040188B();
		if (al_154 == 0x00)
		{
			*(esp_127 - 0x04) = (uint32) eax_150;
			exit(*(esp_127 - 0x04));
		}
		if (bl_133 == 0x00)
		{
			word32 ecx_188;
			byte al_189;
			byte SZO_190;
			byte C_191;
			byte Z_192;
			byte bl_193;
			word32 eax_195;
			byte SCZO_196;
			byte cl_197;
			word32 edi_199;
			word32 ebx_200;
			word32 edx_201;
			cexit();
		}
		word32 * esp_175 = esp_151 - 0x04;
		*esp_175 = 0x00;
		*(esp_175 - 0x04) = 0x01;
		fn004015E6(dwArg00, bArg04);
		*(ebp_10 - 0x04) = ~0x01;
		eax_185 = esi_153;
l004012C3:
		word32 esi_61;
		word32 edi_62;
		fn004019C6(ebp_10, 0x14, dwArg00, dwArg04, dwArg08, dwArg0C, out esi_61, out edi_62);
		return eax_185;
	}
	goto l00401172;
}

// 004013F6: Register (ptr Eq_512) fn004013F6(Stack (ptr Eq_94) dwArg04, Stack uint32 dwArg08)
Eq_512 * fn004013F6(Eq_94 * dwArg04, uint32 dwArg08)
{
	struct Eq_512 * eax_26;
	struct Eq_516 * ecx_13 = dwArg04 + dwArg04->dw003C / 0x0040;
	struct Eq_512 * edx_16 = &ecx_13->w0014 + 0x02 + (word32) ecx_13->w0014 / 22;
	struct Eq_512 * esi_19 = edx_16 + (word32) ecx_13->w0006;
	if (edx_16 != esi_19)
	{
		do
		{
			if (dwArg08 >= edx_16->dw000C && dwArg08 < edx_16->dw0008 + edx_16->dw000C)
			{
				eax_26 = edx_16;
				return eax_26;
			}
			edx_16 = edx_16 + 0x01;
		} while (edx_16 != esi_19);
	}
	eax_26 = null;
	return eax_26;
}

// 0040143A: Register byte fn0040143A()
byte fn0040143A()
{
	if (fn00401B98() != 0x00)
	{
		word32 edx_32 = fs->ptr0018->dw0004;
		do
		{
			__lock();
			word32 eax_37;
			__cmpxchg(globals->dw403338, edx_32, 0x00, out eax_37);
			if (eax_37 == 0x00)
				return 0x00;
		} while (edx_32 == eax_37);
		return 0x01;
	}
	else
		return 0x00;
}

// 0040146F: Register byte fn0040146F(Register word32 edx, Stack (ptr Eq_94) dwArg04)
byte fn0040146F(word32 edx, Eq_94 * dwArg04)
{
	if (dwArg04 == null)
		globals->b403354 = 0x01;
	fn004019FE(edx);
	fn00401C46();
	if (true)
	{
		fn00401C46();
		if (true)
			return 0x01;
		fn00401C46();
	}
	return 0x00;
}

// 0040153F: Register (ptr Eq_603) fn0040153F(Register word32 ebx, Register ptr32 esi, Register ptr32 edi, Register out ptr32 ebxOut, Register out ptr32 esiOut, Register out ptr32 ediOut)
Eq_603 * fn0040153F(word32 ebx, ptr32 esi, ptr32 edi, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	struct Eq_603 * eax_31;
	struct Eq_65 * ebp_10 = fn00401980(ebx, esi, edi, dwLoc0C, 0x00402528, 0x08);
	*(ebp_10 - 0x04) = *(ebp_10 - 0x04) & 0x00;
	struct Eq_623 * eax_15 = (struct Eq_623 *) 23117;
	if (globals->w400000 == 23117)
	{
		eax_15 = globals->ptr40003C;
		if (eax_15->dw400000 == 0x4550 && eax_15->w400018 == 0x010B)
		{
			*(fp - 0x0C) = ebp_10->dw0008 - 0x00400000;
			*(fp - 0x10) = 0x00400000;
			eax_15 = fn004013F6(dwArg00, dwArg04);
			if (eax_15 != null && eax_15->dw0024 >= 0x00)
			{
				*(ebp_10 - 0x04) = ~0x01;
				eax_31 = (struct Eq_603 *) DPB(eax_15, 0x01, 0);
l004015C3:
				word32 esi_37;
				word32 edi_38;
				word32 ebx_39;
				*ebxOut = fn004019C6(ebp_10, 0x08, dwArg00, dwArg04, dwArg08, dwArg0C, out esi_37, out edi_38);
				return eax_31;
			}
		}
	}
	*(ebp_10 - 0x04) = ~0x01;
	eax_31 = (struct Eq_603 *) DPB(eax_15, 0x00, 0);
	goto l004015C3;
}

// 004015C9: void fn004015C9(Stack byte bArg04)
void fn004015C9(byte bArg04)
{
	if (fn00401B98() != 0x00 && bArg04 == 0x00)
		globals->dw403338 = 0x00;
	return;
}

// 004015E6: void fn004015E6(Stack (ptr Eq_94) dwArg04, Stack byte bArg08)
void fn004015E6(Eq_94 * dwArg04, byte bArg08)
{
	if (globals->b403354 == 0x00 || bArg08 == 0x00)
	{
		fn00401C46();
		fn00401C46();
	}
	return;
}

// 0040165E: void fn0040165E()
void fn0040165E()
{
	ui32 eax_16 = globals->dw403004;
	if (eax_16 != 0xBB40E64E && (eax_16 & 0xFFFF0000) != 0x00)
		globals->dw403000 = ~eax_16;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x10);
		ui32 v14_55 = dwLoc0C & 0x00 ^ dwLoc10 & 0x00 ^ GetCurrentThreadId() ^ GetCurrentProcessId();
		QueryPerformanceCounter(fp - 0x18);
		ui32 ecx_69 = dwLoc14 ^ dwLoc18 ^ v14_55 ^ fp - 0x08;
		if (ecx_69 == 0xBB40E64E)
			ecx_69 = ~0x44BF19B0;
		else if ((ecx_69 & 0xFFFF0000) == 0x00)
			ecx_69 = ecx_69 | (ecx_69 | 0x4711) << 0x10;
		globals->dw403004 = ecx_69;
		globals->dw403000 = ~ecx_69;
	}
	return;
}

// 00401761: void fn00401761()
void fn00401761()
{
	return;
}

// 00401767: Register ptr32 fn00401767()
ptr32 fn00401767()
{
	return 0x00403380;
}

// 0040176D: void fn0040176D(Stack word32 dwArg00, Stack (ptr Eq_94) dwArg04)
void fn0040176D(word32 dwArg00, Eq_94 * dwArg04)
{
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		globals->dw403368 = 0x00;
		memset(fp - 808, 0x00, 0x02CC);
		memset(fp - 0x5C, 0x00, 0x50);
		byte bl_90 = 0x00 - (0x01 - IsDebuggerPresent() == 0x00);
		SetUnhandledExceptionFilter(null);
		if (UnhandledExceptionFilter(fp - 0x0C) == 0x00)
			globals->dw403368 = globals->dw403368 & 0x00 - (-((word32) (bl_90 + 0x01)) == 0x00);
		return;
	}
	else
		__fastfail(dwArg04);
}

// 0040188B: Register bool fn0040188B()
bool fn0040188B()
{
	Eq_851 eax_4 = GetModuleHandleW(null);
	if (eax_4 != null && eax_4->unused == 23117)
	{
		struct Eq_865 * eax_42 = eax_4 + eax_4->dw003C / 0x0040;
		if (eax_42->dw0000 == 0x4550 && (eax_42->w0018 == 0x010B && eax_42->dw0074 > 0x0E))
			return eax_42->dw00E8 != 0x00;
	}
	return 0x00;
}

// 00401972: void fn00401972()
void fn00401972()
{
	word32 esp_3;
	globals->ptr4020D4();
	return;
}

// 00401980: Register ptr32 fn00401980(Register word32 ebx, Register ptr32 esi, Register ptr32 edi, Stack word32 dwArg00, Stack word32 dwArg04, Stack ui32 dwArg08)
ptr32 fn00401980(word32 ebx, ptr32 esi, ptr32 edi, word32 dwArg00, word32 dwArg04, ui32 dwArg08)
{
	ptr32 esp_14 = fp - 0x08 - dwArg08;
	*(esp_14 - 0x04) = ebx;
	*(esp_14 - 0x08) = esi;
	*(esp_14 - 0x0C) = edi;
	*(esp_14 - 0x10) = globals->dw403004 ^ fp + 0x08;
	*(esp_14 - 0x14) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 004019C6: Register word32 fn004019C6(Register (ptr Eq_65) ebp, Stack word32 dwArg00, Stack (ptr Eq_94) dwArg04, Stack uint32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10, Register out ptr32 esiOut, Register out ptr32 ediOut)
word32 fn004019C6(Eq_65 * ebp, word32 dwArg00, Eq_94 * dwArg04, uint32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 & esiOut, ptr32 & ediOut)
{
	fs->dw0000 = *(ebp - 0x10);
	ebp->dw0000 = dwArg00;
	word32 edi_14;
	*ediOut = dwArg08;
	word32 esi_17;
	*esiOut = dwArg0C;
	return dwArg10;
}

// 004019FE: void fn004019FE(Register word32 edx)
void fn004019FE(word32 edx)
{
	globals->dw40336C = globals->dw40336C & 0x00;
	globals->dw403010 = globals->dw403010 | 0x01;
	if (IsProcessorFeaturePresent(0x0A) != 0x00)
	{
		ui32 edi_135;
		globals->dw403010 = globals->dw403010 | 0x02;
		globals->dw40336C = 0x01;
		int32 eax_89;
		word32 ebx_90;
		word32 ecx_91;
		word32 edx_92;
		__cpuid(0x00, 0x00, &eax_89, &ebx_90, &ecx_91, &edx_92);
		ui32 eax_124;
		word32 ebx_125;
		ui32 ecx_126;
		word32 edx_127;
		__cpuid(0x01, 0x00, &eax_124, &ebx_125, &ecx_126, &edx_127);
		if ((edx_92 ^ 0x49656E69 | ecx_91 ^ 1818588270 | ebx_90 ^ 1970169159) == 0x00 && ((eax_124 & 0x0FFF3FF0) == 0x000106C0 || ((eax_124 & 0x0FFF3FF0) == 0x00020660 || ((eax_124 & 0x0FFF3FF0) == 0x00020670 || ((eax_124 & 0x0FFF3FF0) == 0x00030650 || ((eax_124 & 0x0FFF3FF0) == 0x00030660 || (eax_124 & 0x0FFF3FF0) == 0x00030670))))))
		{
			ui32 edi_245 = globals->dw403370;
			globals->dw403370 = edi_245 | 0x01;
			edi_135 = edi_245 | 0x01;
		}
		else
			edi_135 = globals->dw403370;
		if (eax_89 >= 0x07)
		{
			word32 eax_210;
			ui32 ebx_211;
			word32 ecx_212;
			word32 edx_213;
			__cpuid(0x07, 0x00, &eax_210, &ebx_211, &ecx_212, &edx_213);
			if ((ebx_211 & 0x0200) != 0x00)
				globals->dw403370 = edi_135 | 0x02;
		}
		if ((ecx_126 & 0x00100000) != 0x00)
		{
			globals->dw403010 = globals->dw403010 | 0x04;
			globals->dw40336C = 0x02;
			if ((ecx_126 & 0x08000000) != 0x00 && ((ecx_126 & 0x10000000) != 0x00 && (((word32) __xgetbv(0x00) & 0x06) == 0x06 && true)))
			{
				ui32 eax_189 = globals->dw403010;
				globals->dw40336C = 0x03;
				globals->dw403010 = eax_189 | 0x08;
				if ((bLoc14 & 0x20) != 0x00)
				{
					globals->dw40336C = 0x05;
					globals->dw403010 = eax_189 | 0x08 | 0x20;
				}
			}
		}
	}
	return;
}

// 00401B98: Register word32 fn00401B98()
word32 fn00401B98()
{
	return (word32) (globals->dw403014 != 0x00);
}

// 00401C46: void fn00401C46()
void fn00401C46()
{
	return;
}

