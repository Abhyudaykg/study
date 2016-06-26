#include<reg51.h>
main()
{
	
	TMOD=0X00;
	TH0=0XE1;
	TL0=0X04;
	TF0=0;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
	while(1);
}