#include<LPC214x.h>
#include"delay.h"
#include"lcd8bit.h"

#define sw (IOPIN0&(1<<7))
#define led 0x01;
main()
{
IODIR0=led;
while(1)
{
if(sw==0)
{
	IOCLR0=led;
	while(sw==0);
}
else
	IOSET0=led;
}
}
