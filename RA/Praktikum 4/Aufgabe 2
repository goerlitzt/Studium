// Name:		Matrikelnummer:
// Name:		Matrikelnummer:
// Datum:

	.file	"aufgabe2.S"
	.text			@ legt eine Textsection fuer PrgrammCode + Konstanten an
	.align	2		@ sorgt dafuer, dass nachfolgende Anweisungen auf einer durch 4 teilbaren Adresse liegen
				@ unteren 2 Bit sind 0
	.global	main		@ nimmt das Symbol main in die globale Sysmboltabelle auf
	.type	main,function
main:

	//adr r1, Marke
	//mov r0, #1
	//cmp r0, #0
	bne Marke
		
  bx	lr
	
.Lfe1:
	.size	main,.Lfe1-main
	
	Marke: add r0, r1, r1


// End of File
