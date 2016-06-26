#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
int hr=22,mn=10,se=40;
#include"prog.h"



main()
{
lcd_init();
while(SW1&&SW2)
	lcdfirst();

if(SW1==0)
{
delay_ms(100);
	while(SW1==0);
	clock();
}

if(SW2==0)
{
	while(SW2==0);
	delay_ms(100);
	
	if(SW4==1)
	do
	{
		set_hr();
		delay_ms(50);
	}while(SW3==1&&SW4==1);
	
	while(SW3==0);
	delay_ms(100);
	if(SW4==1)
	do
	{
	set_mn();
	delay_ms(50);
	}while(SW3==1&&SW4==1);
	
	while(SW3==0);
	delay_ms(100);
	if(SW4==1)
	do
	{
		set_se();
		delay_ms(50);
	}while(SW4==1&&SW4==1);
	
	if(SW4==0)
	{
		delay_ms(100);
		while(SW4==0);
		clock();
	}
}
}