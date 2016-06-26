#include<reg51.h>
sbit LED1=P2^0;
sbit LED2=P2^7;
char i=0,buf[11];

void uart_ha(void) interrupt 4
{
	if(RI==1)
	{
		LED1=LED2;
		buf[i]=SBUF;
		i++;
		RI=0;
	}
	if(TI==1)
	{
		LED2=~LED2;
		TI=0;
	}
}

main()
{
TMOD=0x20;//t1,m2
	SCON=0x50;
	TH1=0xfd;
	TR1=1;
	ES=ES=1;
	SBUF='A';
	while(i<10);
		buf[i]=0;
while(1);
}