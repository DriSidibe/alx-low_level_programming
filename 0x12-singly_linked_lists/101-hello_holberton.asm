	extern printf		; declare C function, to be called

	section .data		 ; data section, initialized variables

msg:	db "Hello, Holberton", 0 ;C string need 0

fmt:	db "%s", 10, 0		 ; the printf format, "\n", '0'

	section .text		; code section

	global main		; the standard gcc entry point

main:

	push rbp		; set up stack frame, must be alligned

	mov rdi, fmt		;arg3, length of string

	mov rsi, msg		;arg2, pointer to string

	mov rax, 0		;arg1, write to screen

	call printf		; call C function


	pop rbp		; restore stack


	mov rax,0		; normal, no error, return value

	ret			; return
