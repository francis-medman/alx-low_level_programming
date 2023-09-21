section .data
	hello db "Hello, Holberton",0

section .text
	global main

extern printf, exit

main:
	push rbp
	mov rdi, hello
	call printf
	add rsp, 8
	pop rbp
	mov rax, 60       ; sys_exit
	xor rdi, rdi      ; exit status 0
	syscall
