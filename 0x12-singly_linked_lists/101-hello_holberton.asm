section	.data
	hello	db	"Hello, Holberton", 10

section	.text
	extern	printf
	global	main

main:
	mov	rdi, hello
	call	printf

	mov	rax, 60
	xor	rdi, rdi
	syscall
