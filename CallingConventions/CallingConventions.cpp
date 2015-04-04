#include "CallingConventions.h"
/*
__declspec(dllexport) int __stdcall MyStdcall(int a, int b, int c) {
	int result;
	__asm {
		xor eax, eax
		add eax, [ebp - 8]
		add eax, [ebp - 12]
		add eax, [ebp - 16]
		mov [result],eax
	}
	return result;
}
__declspec(dllexport) int __fastcall MyFastcall(int a, int b, int c) {
	return a + b + c;
}

__declspec(dllexport) int __cdecl MyCdecl(int a, int b, int c) {
	return a + b + c;
}

*/