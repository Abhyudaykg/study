#include<reg51.h>
#include"delay.h"


sfr SEG = 0x80;
sbit S1 = P2^0;
sbit S2 = P2^1;
sbit SW1 = P2^7;
sbit SW2 = P2^6;

unsigned char count=0;

code unsigned char seg_lut[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};

void seg_num(int num)
{
	unsigned char i;
//for(i=50;i;i--)      // for blinking effect....
{	
SEG=seg_lut[num/10];
S1=0;
	delay_ms(5);
S1=1;
	
SEG=seg_lut[num%10];
	S2=0;
	delay_ms(5);
	S2=1;
}
}
main()
{
int num,dly;
	unsigned char i;
while(1)
{
	do
	{
		if(SW1==0)
		{	
			count++;
			while(SW1==0);
			delay_ms(100);
		}
		for(dly=250;dly;dly--)
				seg_num(count);
	}while(count<60&&SW2==1);
	for(;count;count--)
	{
		for(dly=250;dly;dly--)
			seg_num(count);
	}
}
}