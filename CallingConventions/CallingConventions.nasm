BITS 32
;segment .data
segment .text

GLOBAL _MyStdcall@12
EXPORT _MyStdcall@12
_MyStdcall@12:
	xor eax,eax
	add eax,[esp+4]
	add eax,[esp+8]
	add eax,[esp+12]
	ret 12

GLOBAL _MyCdecl
EXPORT _MyCdecl
_MyCdecl:
	xor eax,eax
	add eax,[esp+4]
	add eax,[esp+8]
	add eax,[esp+12]
	ret

GLOBAL @MyFastcall@12
EXPORT @MyFastcall@12
@MyFastcall@12:
	xor eax,eax
	add eax,ecx
	add eax,edx
	add eax,[esp+4]
	ret 4
