extern "C" {
	__declspec(dllexport) int __stdcall MyStdcall(int a, int b, int c);
	__declspec(dllexport) int __cdecl MyCdecl(int a, int b, int c);
	__declspec(dllexport) int __fastcall MyFastcall(int a, int b, int c);
}