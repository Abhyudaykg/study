;V15BE5A1
;3/3/2016
;ABHYUDAY GODHASARA
CSEG AT 100H
DLY:
	MOV R1,#2
D1:
	MOV R2,#250
D2:
	MOV R0,#250
	DJNZ R0,$
	MOV R0,#247
	DJNZ R0,$
	DJNZ R2,D2
	DJNZ R1,D1
	MOV R0,#250
	DJNZ R0,$
	MOV R0,#243
	NOP
	DJNZ R0,$
RET
CSEG AT 0H
MAIN:
	ACALL DLY
	SJMP $
END