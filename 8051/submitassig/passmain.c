#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include"keypad.h"
#include<string.h>
#include"prog.h"

code unsigned char pass[]="ABCD"; 
main()
{
unsigned char ret;
unsigned char buf[8];
unsigned char i=0;
unsigned char l1=strlen(pass);
unsigned char l2;
lcd_init();
lcd_cmd(0x80);
lcd_string("password:");
lcd_cmd(0xc0);
lcd_int(l1);
while(ret!='Z')
{
ret=0;
while(ret==0)
	ret=keyscan();
if(ret!='Z')
{
	buf[i++]=ret;
	lcd_data('*');
}
}
l2=strlen(buf);
lcd_int(l2);
delay_ms(5000);
lcd_cmd(0xc0);
lcd_string(buf);


if(l2!=l1)
{
lcd_cmd(0x01);
lcd_string("Invalid");
delay_ms(5000);
}
else
{
//ret=strcmp(pass,buf);
ret=my_comp(pass,buf,l2);
if(ret==0)
{
	lcd_cmd(0x01);
	lcd_string("Valid");
	delay_ms(5000);
}
else
	{
	lcd_cmd(0x01);
	lcd_string("Invalid");
	delay_ms(5000);
	}
}
}