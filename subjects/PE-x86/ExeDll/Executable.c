// Executable.c
// Generated by decompiling Executable.exe
// using Reko decompiler version 0.6.1.0.

#include "Executable.h"

word32 fn00401000(ptr32 & ebpOut)
{
	InitializeCriticalSection(&exported_critical_section);
	fn00401060(0x00402108);
	*(fp - 0x0C) = 0x01;
	*(fp - 0x10) = slow_and_safe_increment(*(fp - 0x0C));
	*(fp - 0x14) = 0x00402108;
	fn00401060(dwArg00);
	*(fp - 0x18) = *&exported_int;
	*(fp - 0x1C) = 0x00402108;
	word32 ebp_32;
	*ebpOut = fn00401060(dwArg00);
	return 0x00;
}

void fn00401050()
{
	return;
}

word32 fn00401060(word32 dwArg04)
{
	word32 esp_13;
	word32 ebp_14;
	word32 esi_15;
	byte SCZO_16;
	word32 ecx_17;
	word32 eax_18;
	_acrt_iob_func();
	fn00401050();
	word32 esp_38;
	word32 ebp_39;
	word32 esi_40;
	byte SCZO_41;
	word32 ecx_42;
	word32 eax_43;
	_stdio_common_vfprintf();
	return 0x01;
}

Eq_86 Win32CrtStartup()
{
	ptr32 ecx_2 = fn00401663();
	struct Eq_91 * ebp_12 = fn00401980(ecx_2, ebx, esi, edi, dwLoc0C, 0x004024D8, 0x14);
	*(fp - 0x0C) = 0x01;
	word32 * esp_19 = fp - 0x08;
	if (fn00401474(edx, dwArg00) == 0x00)
	{
l00401177:
		esp_19 = esp_19 - 0x04;
		*esp_19 = 0x07;
		fn00401774(0x14, dwArg00);
	}
	*(ebp_12 - 0x19) = 0x00;
	*(ebp_12 - 0x04) = *(ebp_12 - 0x04) & 0x00;
	*(ebp_12 - 0x24) = fn0040143F(0x14);
	ebx = DPB(ebx, 0x00, 0);
	word32 eax_37 = globals->dw403334;
	if (eax_37 != 0x01)
	{
		Eq_86 eax_193;
		if (eax_37 == 0x00)
		{
			globals->dw403334 = 0x01;
			PVFV ** esp_282 = esp_19 - 0x04;
			*esp_282 = (PVFV **) &globals->t4020EC;
			*(esp_282 - 0x04) = 0x004020E0;
			if (_initterm_e(*(esp_282 - 0x04), *esp_282) != 0x00)
			{
				*(ebp_12 - 0x04) = ~0x01;
				eax_193.u0 = 0xFF;
				goto l004012C8;
			}
			*esp_282 = (PVFV **) &globals->t4020DC;
			*(esp_282 - 0x04) = 0x004020D4;
			_initterm(*(esp_282 - 0x04), *esp_282);
			globals->dw403334 = 0x02;
			esp_19 = esp_282;
		}
		else
		{
			*(ebp_12 - 0x19) = 0x01;
			ebx = DPB(ebx, 0x01, 0);
		}
		ptr32 * esp_74 = esp_19 - 0x04;
		*esp_74 = *(ebp_12 - 0x24);
		fn004015CE(bArg00);
		ptr32 ecx_251 = *esp_74;
		fn00401768();
		ptr32 esp_253 = esp_74 + 0x01;
		ptr32 edi_248 = 0x00;
		if (globals->dw403388 != 0x00)
		{
			*esp_74 = 0x00403388;
			<anonymous> ** esi_247;
			word32 eax_249 = fn00401544(ecx_251, ebx, 0x00403388, 0x00, out ebx, out esi_247, out edi_248);
			byte al_250 = (byte) eax_249;
			ecx_251 = *esp_74;
			esp_253 = esp_74 + 0x01;
			if (al_250 != 0x00)
			{
				*esp_74 = edi_248;
				*(esp_74 - 0x04) = 0x02;
				*(esp_74 - 0x08) = edi_248;
				<anonymous> * esi_263 = *esi_247;
				fn00401976();
				byte al_268;
				byte SZO_269;
				byte C_270;
				byte Z_271;
				byte bl_272;
				word32 ebp_273;
				word32 eax_274;
				byte SCZO_275;
				byte cl_276;
				word32 esi_277;
				word32 edx_280;
				esi_263();
			}
		}
		word32 eax_94 = fn0040176E();
		if (globals->ptr403384 != edi_248)
		{
			ptr32 * esp_211 = esp_253 - 0x04;
			*esp_211 = 0x00403384;
			word32 ebx_213;
			ptr32 * esi_214;
			word32 edi_215;
			word32 eax_216 = fn00401544(ecx_251, ebx, 0x00403384, edi_248, out ebx_213, out esi_214, out edi_215);
			byte al_217 = (byte) eax_216;
			if (al_217 != 0x00)
			{
				*esp_211 = *esi_214;
				word32 esp_226;
				word32 ecx_227;
				byte al_228;
				byte SZO_229;
				byte C_230;
				byte Z_231;
				byte bl_232;
				word32 ebp_233;
				word32 eax_234;
				byte SCZO_235;
				byte cl_236;
				word32 esi_237;
				word32 edi_238;
				word32 ebx_239;
				word32 edx_240;
				register_thread_local_exe_atexit_callback();
			}
		}
		word32 esp_99;
		word32 ecx_100;
		byte al_101;
		byte SZO_102;
		byte C_103;
		byte Z_104;
		byte bl_105;
		word32 ebp_106;
		word32 eax_107;
		byte SCZO_108;
		byte cl_109;
		word32 esi_110;
		word32 edi_111;
		word32 ebx_112;
		word32 edx_113;
		_p___argv();
		word32 esp_116;
		word32 ecx_117;
		byte al_118;
		byte SZO_119;
		byte C_120;
		byte Z_121;
		byte bl_122;
		word32 ebp_123;
		word32 eax_124;
		byte SCZO_125;
		byte cl_126;
		word32 esi_127;
		word32 edi_128;
		word32 ebx_129;
		word32 edx_130;
		_p___argc();
		struct Eq_406 * esp_133;
		word32 ecx_134;
		byte al_135;
		byte SZO_136;
		byte C_137;
		byte Z_138;
		byte bl_139;
		word32 ebp_140;
		Eq_86 eax_141;
		byte SCZO_142;
		byte cl_143;
		word32 * esi_144;
		word32 * edi_145;
		word32 ebx_146;
		word32 edx_147;
		get_initial_narrow_environment();
		esp_133->tFFFFFFF8 = eax_141;
		esp_133->dwFFFFFFF4 = *edi_145;
		esp_133->dwFFFFFFF0 = *esi_144;
		Eq_86 eax_158 = fn00401000(out ebp_12);
		ptr32 esp_159 = &esp_133->tFFFFFFF8;
		Eq_86 esi_161 = eax_158;
		byte al_162 = fn0040188F();
		if (al_162 == 0x00)
		{
			esp_133->tFFFFFFF8 = eax_158;
			exit(esp_133->tFFFFFFF8);
		}
		if (bl_139 == 0x00)
		{
			word32 esp_195;
			word32 ecx_196;
			byte al_197;
			byte SZO_198;
			byte C_199;
			byte Z_200;
			byte bl_201;
			word32 eax_203;
			byte SCZO_204;
			byte cl_205;
			word32 edi_207;
			word32 ebx_208;
			word32 edx_209;
			cexit();
			esp_159 = esp_195 + ~0x03;
		}
		word32 * esp_183 = esp_159 - 0x04;
		*esp_183 = 0x00;
		*(esp_183 - 0x04) = 0x01;
		fn004015EB(dwArg00, bArg04);
		*(ebp_12 - 0x04) = ~0x01;
		eax_193 = esi_161;
l004012C8:
		word32 ebp_62;
		word32 esi_63;
		word32 edi_64;
		fn004019C6(ebp_12, 0x14, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_62, out esi_63, out edi_64);
		return eax_193;
	}
	goto l00401177;
}

Eq_550 * fn004013FB(word32 dwArg04, ptr32 dwArg08)
{
	struct Eq_550 * eax_26;
	struct Eq_554 * ecx_13 = dwArg04 + dwArg04->dw003C / 0x0040;
	struct Eq_550 * edx_16 = ecx_13->w0014 + 0x02 + (word32) ecx_13->w0014 / 22;
	struct Eq_550 * esi_19 = edx_16 + (word32) ecx_13->w0006;
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

byte fn0040143F(word32 dwArg00)
{
	if (fn00401B98() != 0x00)
	{
		word32 edx_32 = fs->ptr0018->dw0004;
l00401460:
		__lock();
		word32 eax_36;
		__cmpxchg(globals->dw403338, edx_32, 0x00, out eax_36);
		__lock();
		word32 eax_43;
		__cmpxchg(globals->dw403338, edx_32, 0x00, out eax_43);
		if (eax_43 != 0x00)
		{
			if (edx_32 != eax_43)
				goto l00401460;
			return 0x01;
		}
		else
		{
			return 0x00;
			return 0x00;
		}
	}
	else
		return 0x00;
}

byte fn00401474(word32 edx, word32 dwArg04)
{
	if (dwArg04 == 0x00)
		globals->b403354 = 0x01;
	fn004019FE(edx);
	fn00401C48();
	if (true)
	{
		fn00401C48();
		if (true)
			return 0x01;
		fn00401C48();
	}
	return 0x00;
}

Eq_656 * fn00401544(ptr32 ecx, word32 ebx, ptr32 esi, ptr32 edi, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	struct Eq_656 * eax_30;
	struct Eq_91 * ebp_11 = fn00401980(ecx, ebx, esi, edi, dwLoc0C, 0x004024F8, 0x08);
	*(ebp_11 - 0x04) = *(ebp_11 - 0x04) & 0x00;
	struct Eq_676 * eax_16 = (struct Eq_676 *) 23117;
	if ((word16 *) 0x00400000 == 23117)
	{
		eax_16 = (struct Eq_676 *) (struct Eq_676 **) 0x0040003C;
		if (eax_16->dw400000 == 0x4550 && eax_16->w400018 == 0x010B)
		{
			*(fp - 0x0C) = ebp_11->dw0008 - 0x00400000;
			*(fp - 0x10) = 0x00400000;
			eax_16 = fn004013FB(dwArg00, dwArg04);
			if (eax_16 != null && eax_16->dw0024 >= 0x00)
			{
				*(ebp_11 - 0x04) = ~0x01;
				eax_30 = (struct Eq_656 *) DPB(eax_16, 0x01, 0);
l004015C8:
				word32 ebp_37;
				word32 esi_38;
				word32 edi_39;
				word32 ebx_40;
				*ebxOut = fn004019C6(ebp_11, 0x08, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_37, out esi_38, out edi_39);
				return eax_30;
			}
		}
	}
	*(ebp_11 - 0x04) = ~0x01;
	eax_30 = (struct Eq_656 *) DPB(eax_16, 0x00, 0);
	goto l004015C8;
}

void fn004015CE(byte bArg04)
{
	if (fn00401B98() != 0x00 && bArg04 == 0x00)
		globals->dw403338 = 0x00;
	return;
}

void fn004015EB(word32 dwArg04, byte bArg08)
{
	if (globals->b403354 == 0x00 || bArg08 == 0x00)
	{
		fn00401C48();
		fn00401C48();
	}
	return;
}

ui32 fn00401663()
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
		ecx = ~ecx_69;
		globals->dw403000 = ecx;
	}
	return ecx;
}

void fn00401768()
{
	return;
}

ptr32 fn0040176E()
{
	return 0x00403384;
}

void fn00401774(word32 dwArg00, word32 dwArg04)
{
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		globals->dw403368 = 0x00;
		memset(fp + ~0x0327, 0x00, 0x02CC);
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

bool fn0040188F()
{
	Eq_910 eax_4 = GetModuleHandleW(null);
	if (eax_4 != null && eax_4->unused == 23117)
	{
		struct Eq_924 * eax_42 = eax_4 + eax_4->dw003C / 0x0040;
		if (eax_42->dw0000 == 0x4550 && (eax_42->w0018 == 0x010B && eax_42->dw0074 > 0x0E))
			return eax_42->dw00E8 != 0x00;
	}
	return 0x00;
}

void fn00401976()
{
	word32 esp_3;
	globals->ptr4020D0();
	return;
}

ptr32 fn00401980(ptr32 ecx, word32 ebx, ptr32 esi, ptr32 edi, word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	ptr32 esp_14 = fp - 0x08 - dwArg08;
	*(esp_14 - 0x04) = ebx;
	*(esp_14 - 0x08) = esi;
	*(esp_14 - 0x0C) = edi;
	ui32 eax_24 = globals->dw403004;
	*(esp_14 - 0x10) = eax_24 ^ fp + 0x08;
	*(esp_14 - 0x14) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	ui32 v11_26 = dwArg04 ^ eax_24;
	if (ecx == 0x00)
	{
		ptr32 ebp_51;
		word32 esi_52;
		word32 edi_53;
		fn004019C6(fp + 0x08, v11_26, ~0x01, ebp, dwArg0C, dwArg10, out ebp_51, out esi_52, out edi_53);
		return ebp_51;
	}
	else
		return fp + 0x08;
}

word32 fn004019C6(Eq_91 * ebp, ui32 dwArg00, word32 dwArg04, ptr32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 & ebpOut, ptr32 & esiOut, ptr32 & ediOut)
{
	fs->dw0000 = *(ebp - 0x10);
	word32 ebp_22 = ebp->dw0000;
	*ebpOut = ebp_22;
	ebp->dw0000 = dwArg00;
	word32 edi_14 = dwArg08;
	*ediOut = edi_14;
	word32 esi_17 = dwArg0C;
	*esiOut = esi_17;
	if (dwArg00 == 0x00)
	{
		*(ebp - 0x04) = ebp_22;
		*(ebp - 0x08) = ebp->dw0010;
		*(ebp - 0x0C) = ebp->dw000C;
		*(ebp - 0x10) = ebp->dw0008;
		*(ebp - 0x14) = ebp->dw0004;
		*(ebp - 0x18) = 0x00401090;
		*(ebp - 0x1C) = 0x00403004;
		struct Eq_1090 * esp_57;
		word32 ebp_58;
		word32 ecx_59;
		struct Eq_1093 * fs_60;
		word32 edi_61;
		word32 esi_62;
		word32 ebx_63;
		byte SCZO_64;
		except_handler4_common();
		word32 ebp_68;
		*ebpOut = esp_57->dw0014;
		return ebx_63;
	}
	else
		return dwArg10;
}

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

word32 fn00401B98()
{
	return (word32) (globals->dw403014 != 0x00);
}

void fn00401C48()
{
	return;
}
