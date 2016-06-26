#include<reg51.h>
#include"delay.h"

sbit C0 = P2^0;
sbit C1 = P2^1;
sbit C2 = P2^2;

sbit R0 = P2^7;
sbit R1 = P2^6;

code unsigned char kpad[2][3]={1,2,3,4,5,6};
bit colscan()
{
	return (C0&C1&C2);
}
unsigned char keyscan()
{
unsigned char row,col
R0=R1=0;
C0=C1=C2=1;

while(colscan()==1);

R0=0;
R1=1;
if(colscan()==0)
{
	row=0;
	goto colcheck;
}
R0=1;
R1=0;
if(colscan()==0)
{
	row=1;
	goto colcheck;
}
colcheck:
	if(C0==0)
		col=0;
	if(C1==0)
		col=1;
	if(C2==0)
		col=2;

	delay_ms(100);
	while(colscan()==0);
	return(kpad[row][col]);
}