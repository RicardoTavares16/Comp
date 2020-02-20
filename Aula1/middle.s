	.text
	.file	"helloworld.ll"
	.globl	main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	pushq	%rax
.Ltmp0:
	.cfi_def_cfa_offset 16
	movl	$.L.msg, %edi
	callq	puts
	xorl	%eax, %eax
	popq	%rcx
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc

	.type	.L.msg,@object          # @.msg
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.msg:
	.asciz	"Hello World!\n"
	.size	.L.msg, 14


	.section	".note.GNU-stack","",@progbits
