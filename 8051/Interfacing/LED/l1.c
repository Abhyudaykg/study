#include<reg51.h>
#include "delay.h"
//extern void delay_ms(unsigned char);
sbit LED = P2^0;

main()
{
LED=0;
	while(1)
{
  LED=~LED;
	delay_ms(1000);
}
}