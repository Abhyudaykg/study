#include<LPC214x.h>
#include"delay.h"
#define LED 0x00FF0000
main()
{
IODIR0=0x01; // p0.0 as op pin
IODIR1=LED;	// p1.16 as op pin

while(1)
{.
IOSET1=LED;
	IOSET0=0X01;
	delay_ms(1000);
	IOCLR0=0X01;
	IOCLR1=LED;
	delay_ms(1000);
}
}
