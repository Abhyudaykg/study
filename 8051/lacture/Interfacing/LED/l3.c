#include<reg51.h>
#include"delay.h"

sfr LED = 0xA0;
data unsigned char a;
data unsigned char b;
main()
{
	unsigned char i;
	a=0x01;
	b=0x80;
	ACC=0;
	LED=0x0f;
	while(1)
	{
		for(i=0;i<4;i++)
		{
			ACC=(a<<i)|(b>>i);
			LED=ACC^0x0f;
			delay_s(2);
		}

		for(i=4;i>0;i--)
		{
			ACC=(a<<i)|(b>>i);
			LED=ACC^0x0f;
			delay_s(2);
		}
	}
}