#include "lib9.h"

ulong
_tas(ulong *la)
{
	int v;

	_asm {
		mov rax, la
		mov rbx, 1
		xchg	rbx, [rax]
		mov	v, rbx
	}
	return v;
}
