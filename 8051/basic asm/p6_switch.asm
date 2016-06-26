; if switch is pressed than acc='c' if not acc='s'
CSEG AT 0H
MAIN:
	MOV A,#'S'	
	JB P2.0,$
	MOV A,#'C'
	JNB P2.0,$
	SJMP MAIN
END
