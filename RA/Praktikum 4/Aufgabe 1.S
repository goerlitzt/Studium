// Name:		Matrikelnummer:
// Name:		Matrikelnummer:
// Datum:

	.file	"aufgabe1.S"
	.text			@ legt eine Textsection fuer PrgrammCode + Konstanten an
	.align	2		@ sorgt dafuer, dass nachfolgende Anweisungen auf einer durch 4 teilbaren Adresse liegen
				@ unteren 2 Bit sind 0
	.global	main		@ nimmt das Symbol main in die globale Sysmboltabelle auf
	.type	main,function
main:
//	Hier bitte Ihren ProgrammCode einfuegen
	
	mov 	r0, #0
	str 	r1, [r0], #4 	//Inhalt von r1 auf Adresse 0x0 danach steht in r0 0x4
	eor 	r0, r0, r0
	str 	r1, [r0, #4] 	//Inhalt von r1 auf Adresse 0x4 danach steht in r0 0x0
	mov 	r0, #0
	str 	r1, [r0]! 	//Inhalt von r1 auf Adresse 0x0 danach steht in r0 0x0
	sub 	r0, r0, r0
	str 	r1, [r0, #4]! 	//Inhalt von r1 auf Adresse 0x4 danach steht in r0 0x4
	and 	r0, r0, #0
	strb 	r1, [r0, #1]! 	//Inhalt von r1 auf Adresse 0x1 danach steht in r0 0x1		?????
	mov 	r1, #4
	strb 	r1, [r0, r1]! 	//Inhalt von r1 auf Adresse 0x_____ danach steht in r0 0x_____
	
	bx	lr
.Lfe1:
	.size	main,.Lfe1-main

// End of File
