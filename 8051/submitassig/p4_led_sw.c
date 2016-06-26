#include<reg51.h>
#include"delay.h"

unsigned char c=0;
sfr LED = 0xA0;
unsigned int cou()
{
if(c==0)
	return 2000;
else
if(c==1)
	return 1000;
else
if(c==2)
	return 500;
else
	if(c==3)
	return 100;
else
	{ c=0;
		return 2000;
	}
}
sbit SW =P1^7;

main()
{
unsigned int k=0;
unsigned char i;
	while(1)
	{
		for(i=0;i<8;i++)
		{
			ACC=(1<<i);
			LED=ACC^0x0f;
			if(SW==0)
			{
				//LED=0xf0;
				c++;
				while(SW==0);
				delay_ms(100);
			}
			k=cou();
			delay_ms(k);
		}

	}
}