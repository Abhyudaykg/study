#include<reg51.h>
sbit LED = P2^0;

void t0_ha(void) interrupt 1
{
	LED=~LED;
	TH0=0x3c;
	TL0=0xAF;
}
main()
{
unsigned char i;
	TMOD=0x01;
	TH0=0x3c;
	TL0=0xAF;
	TR0=1;
	ET0=EA=1;
	
	while(1)
	{
		for(i=0;i<8;i++)
			P1=(1<<i);
	}
}