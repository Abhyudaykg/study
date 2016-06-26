#include<reg51.h>
main()
{
	unsigned char i;
	for(i=0;i<10;i++)
	{
	TMOD=0X00;
	TH1=0XE1;
	TL1=0X07;
	TF1=0;
	TR1=1;
	while(TF1==0);
	TR1=0;
	TF1=0;
		TF1=0;
	
	}
	while(1);
}