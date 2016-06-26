#include<reg51.h>
#include"delay.h"

void EX0_HANDLEAR(void) interrupt 0
{
		LED=~LED;
}

main()
{
unsigned char i;
IE=0x81;
while(1)
for(i=0;i<8;i++)
{
	delay_ms(5000);
	P1=(1<<i);
}
}