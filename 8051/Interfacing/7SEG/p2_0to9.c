#include<reg51.h>
#include"delay.h"
sfr SEG = 0x80;

code unsigned char seg_lut[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
main()
{
	int num;
	while(1)
	{
	for(num=0;num<10;num++)
	{
		delay_ms(1000);
	SEG=seg_lut[num];
	}
	}
}