#include<reg51.h>
#include"delay.h"

sfr SEG = 0x80;
sbit S1 = P2^0;
sbit S2 = P2^1;
sbit S3 = P2^2;
sbit S4 = P2^3;

code unsigned char seg_lut[]={0x40|0x80,0x79|0x80,0x24|0x80,0x30|0x80,0x19|0x80,0x12|0x80,0x02|0x80,0x78|0x80,0x00|0x80,0x10|0x80};

void seg_num(int num)
{
SEG=seg_lut[num/1000];
S1=0;
	delay_ms(2);
S1=1;
	
SEG=seg_lut[(num/100)%10];
	S2=0;
	delay_ms(2);
	S2=1;
SEG=seg_lut[(num/10)%10];
	S3=0;
	delay_ms(2);
	S3=1;
SEG=seg_lut[num%10];
	S4=0;
	delay_ms(2);
	S4=1;

}
main()
{
int num=1234;
	while(1)
	{
		seg_num(num|0x80);
	}
}