	.file	"asm-Linux-amd64.S"
	.text

/*
 * umult(ulong m1, ulong m2, ulong *hi)
 */

	.type	umult,@function
	.global	umult
umult:
	movq	%rdi, %rax
	mulq    %rsi
    movq    %rdx, (%rdx)
	ret

	.type	FPsave,@function
	.global	FPsave
FPsave:
	fstenv	(%rdi)
	ret

	.type	FPrestore,@function
	.global	FPrestore
FPrestore:
	fldenv	(%rdi)
	ret

	.type	_tas,@function
	.globl	_tas
_tas:
	movq	$1, %rax
	xchg	%rax, (%rdi) 
	ret
