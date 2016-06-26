
sbit C0 = P2^0;
sbit C1 = P2^1;
sbit C2 = P2^2;
sbit C3 = P2^3;

sbit R0 = P2^4;
sbit R1 = P2^5;
sbit R2 = P2^6;
sbit R3 = P2^7;

code unsigned int kpad[4][4]={1,2,3,'+',4,5,6,'-',7,8,9,'*','%',0,'/','='};

bit colscan()
{
	return (C0&C1&C2&C3);
}

unsigned int keyscan()
{
unsigned char row,col ;
R0=R1=R1=R3=0;
C0=C1=C2=C3=1;

while(colscan()==1);

R0=0;
R1=1;
R2=1;
R3=1;
if(colscan()==0)
{
	row=0;
	goto colcheck;
}
R0=1;
R1=0;
R2=1;
R3=1;
if(colscan()==0)
{
	row=1;
	goto colcheck;
}
R0=1;
R1=1;
R2=0;
R3=1;
if(colscan()==0)
{
	row=2;
	goto colcheck;
}
R0=1;
R1=1;
R2=1;
R3=0;
if(colscan()==0)
{
	row=3;
	goto colcheck;
}

colcheck:
	if(C0==0)
		col=0;
	if(C1==0)
		col=1;
	if(C2==0)
		col=2;
	if(C3==0)
			col=3;
	
	delay_ms(100);
	while(colscan()==0);
	return(kpad[row][col]);
}

