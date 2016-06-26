#include<reg51.h>
#include"delay.h"

sfr LED =0xA0;

main()
{
unsigned char i;
	ACC=0;
	while(1)
	{
		for(i=0;i<8;i++)
		{
			ACC=(1<<i);
			LED=ACC^0x0f;
			delay_s(1);
		}
	}
}