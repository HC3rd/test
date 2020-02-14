	.file	"try5.c"
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
	pushq	%r12
	pushq	%rbx
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	leaq	x(%rip), %rbx
	leaq	y(%rip), %r12
	jmp	.L2
.L3:
	movq	%r12, %rdx
	leaq	4(%rdx), %r12
	movq	%rbx, %rax
	leaq	4(%rax), %rbx
	movl	(%rdx), %edx
	movl	%edx, (%rax)
.L2:
	leaq	200+x(%rip), %rax
	cmpq	%rax, %rbx
	jb	.L3
	nop
	popq	%rbx
	popq	%r12
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
