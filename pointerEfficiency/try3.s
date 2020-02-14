	.file	"try3.c"
	.text
	.comm	x,200,32
	.comm	y,200,32
	.comm	i,4,4
	.comm	p1,8,8
	.comm	p2,8,8
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
	leaq	x(%rip), %rax
	movq	%rax, p1(%rip)
	leaq	y(%rip), %rax
	movq	%rax, p2(%rip)
	movl	$0, i(%rip)
	jmp	.L2
.L3:
	movq	p2(%rip), %rdx
	leaq	4(%rdx), %rax
	movq	%rax, p2(%rip)
	movq	p1(%rip), %rax
	leaq	4(%rax), %rcx
	movq	%rcx, p1(%rip)
	movl	(%rdx), %edx
	movl	%edx, (%rax)
	movl	i(%rip), %eax
	addl	$1, %eax
	movl	%eax, i(%rip)
.L2:
	movl	i(%rip), %eax
	cmpl	$49, %eax
	jle	.L3
	nop
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
