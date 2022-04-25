	extern printf

	SECTION .data

	msg: db "Hello, Holberton", 10, 0 ; message to print

	SECTION .text

	global main ; std gcc entry point

main:
	mov edi, msg 	; move first arg to edi register
	xor eax, eax
	call printf

	mov eax, 0 		; set return value as 0
	ret 			; return
