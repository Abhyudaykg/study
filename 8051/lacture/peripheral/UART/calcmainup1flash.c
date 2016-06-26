#include<reg51.h>
#include"delay.h"
#include"keypad.h"
#include"lcd8bit.h"
#include"prog.h"

main()
{
float n1=0;
float n2=0;
unsigned char op;
float ans=0;
unsigned int num=0;

lcd_init();

while(num<10)
{
	num=keyscan();
	if(num<10)
	{
	lcd_int(num);
	n1=n1*10+num;
	}
}
ans=n1;
repet:
n2=0;
lcd_cmd(0x01);
lcd_float(ans);
op=num;
lcd_data(op);

num=0;

while(num<10)
{
	num=keyscan();
	if(num<10)
	{
		lcd_int(num);
		n2=n2*10+num;
	}
}
lcd_cmd(0x01);
lcd_float(ans);
lcd_data(op);
lcd_float(n2);

ans=calc(ans,n2,op);

lcd_cmd(0xc0);
lcd_float(ans);
delay_ms(100);
if(num=='=')
	delay_ms(10000);
if(num!='=')
	goto repet;
}
