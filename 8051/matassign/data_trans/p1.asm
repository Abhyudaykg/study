CSEG AT 0H

	MOV 30H,#3BH

	MOV R0,#30H
	MOV R1,#32H
	
	MOV A,@R0
	MOV @R1,A
END