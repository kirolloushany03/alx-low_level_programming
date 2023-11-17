section .data
	hello	db	'Hello, Holberton', 0
	hello_len	equ	$-hello

section .text
	global	main
	extern	printf

main:
	mov	rdi,	hello
	xor	rax,	rax
	call	printf
	mov	eax,	0x60
	xor	edi,	edi
	syscall
