#include<reg51.h>
#include"delay.h"

sfr LED = 0xA0;
main()
{
	unsigned char a;
	unsigned char i;
	while(1)
	{
		a=0x03;
		for(i=0;i<4;i++)
		{	
			LED=a^0x0f;
			delay_s(1);
			a=a<<2;
		}
	}
}