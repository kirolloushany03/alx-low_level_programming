section .data
    hello db "Hello, Holberton", 10 ; 10 is the newline character

section .text
    extern printf
    global main

main:
    mov rdi, hello ; Set the format string address
    call printf    ; Call printf function

    ; Exit the program
    mov rax, 60     ; syscall: exit
    xor rdi, rdi    ; status: 0
    syscall
