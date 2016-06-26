#include<reg51.h>
#include"delay.h"

sfr SEG = 0x80;
sbit S1 = P2^0;
sbit S2 = P2^1;
sbit S3 = P2^2;
sbit S4 = P2^3;

code unsigned char seg_lut[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};

void seg_num(int num)
{
SEG=(seg_lut[num/1000])|0x80;
S1=0;
	delay_ms(2);
S1=1;
	
SEG=seg_lut[(num/100)%10];
	S2=0;
	delay_ms(2);
	S2=1;
SEG=(seg_lut[(num/10)%10])|0x80;
	S3=0;
	delay_ms(2);
	S3=1;
SEG=(seg_lut[num%10])|0x80;
	S4=0;
	delay_ms(2);
	S4=1;
}
main()
{
int num,dly;
int minut=0;
int second=0;
	
while(1)
{
for(minut=0;minut<60;minut++)
	{
		for(second=0;second<60;second++)
			{
				num=minut*100+second;
				for(dly=5;dly;dly--)
						seg_num(num);
			}
	}
}
}