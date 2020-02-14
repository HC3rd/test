	.file	"try4.c"
	.text
	.comm	x,200,32
	.comm	y,200,32
	.globl	try1
	.type	try1, @function
try1:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	leaq	x(%rip), %r12
	leaq	y(%rip), %r13
	movl	$0, %ebx
	jmp	.L2
.L3:
	movq	%r13, %rdx
	leaq	4(%rdx), %r13
	movq	%r12, %rax
	leaq	4(%rax), %r12
	movl	(%rdx), %edx
	movl	%edx, (%rax)
	addl	$1, %ebx
.L2:
	cmpl	$49, %ebx
	jle	.L3
	nop
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	try1, .-try1
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
