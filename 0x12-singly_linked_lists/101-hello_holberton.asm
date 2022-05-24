; An program written in assembly language
; printing Hello, Holberton
section .data
;Initialized data. Hello, Holberton is initialized here.
	message: db "Hello, Holberton", 0
	mlen	db "%s", 10, 0

section .text
;writing code in text section
	extern printf
	global main

;main function here
main:
	mov esi, message
	mov edi, mlen
	mov eax, 0
	call printf

	;exit here
	mov eax, 0
	ret

