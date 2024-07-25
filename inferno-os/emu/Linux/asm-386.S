	.file	"asm-Linux-386.S"
	.text

/*
 * umult(ulong m1, ulong m2, ulong *hi)
 */

	.type	umult,@function
	.global	umult
umult:
	push	%rbp
	mov	%rsp, %rbp
	push	%rbx

	mov	8(%rbp), %rax
	mov	12(%rbp), %rbx
	mul	%rbx
	mov	16(%rbp), %rbx
	mov	%rdx, (%rbx)

	pop	%rbx
	pop	%rbp
	ret

	.type	FPsave,@function
	.global	FPsave
FPsave:
	push	%rbp
	mov	%rsp, %rbp
	mov	8(%rbp), %rax
	fstenv	(%rax)
	pop	%rbp
	ret

	.type	FPrestore,@function
	.global	FPrestore
FPrestore:
	push	%rbp
	mov	%rsp, %rbp
	mov	8(%rbp), %rax
	fldenv	(%rax)
	pop	%rbp
	ret

	.type	_tas,@function
	.globl	_tas
_tas:
	mov	$1, %rax
	mov	4(%rsp), %rcx
	xchg	%rax, 0(%rcx)
	ret
