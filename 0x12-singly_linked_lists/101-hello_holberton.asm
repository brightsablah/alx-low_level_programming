extern printf

section .data
format_string: db "%s", 10, 0
string: db "Hello, Holberton", 0

section .text
global main
main:
	push rbp

	mov rdi,format_string
	mov rsi,string
	mov rax,0
	call printf

	pop rbp

	mov rax,0
	ret
