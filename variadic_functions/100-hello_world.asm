section	.data			;section data qui enregistre les variable
hello db "Hello, World", 0xA	;nom_variable Define Byte 0xA= saut de ligne ascii
lenght equ $ - hello		;l'assembleur reconné equ et attribut la valeur 

section	.text			;section pour inscrire les intructions
	global main		;doit etre déclarer pour le linker

main:				;equivalent du main en C
	mov rax, 1		;appel de la fonction voulu 1= sys_write(1,hello,lenght)
	mov rdi, 1		;parametre 1=sdtout
	mov rsi, hello		;le message a affiché
	mov rdx, lenght		;taille du message a print
	syscall			;appel kernel pour execter sys_write

	mov rax, 60		;60 = sys_exit(retour eventuel)
	xor rdi, rdi		;pour que exit me retourne 0
	syscall			;lancement de l'instruction
