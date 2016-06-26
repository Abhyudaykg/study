#include<reg51.h>
#include"delay.h"

sbit LED = P2^0;
sbit SW1 = P2^6;
sbit SW2 = P2^7;


main()
{
	while(1)
	{
		if((SW1==0)&&(SW2==0))
			LED=0;
		else
			LED=1;
	}
}