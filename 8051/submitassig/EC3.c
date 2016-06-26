#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include<string.h>

code unsigned char s[]="Abhyuday";
main()
{
char i;
unsigned char l=strlen(s);
static unsigned char c=0;
lcd_init();
while(1)
{
for(i=0;i<16+l;i++)
{
	if(0x80>0x8f-i)
	{
		lcd_cmd(0x80);
		lcd_string(&s[i-16]);
		lcd_cmd(0x8f-i+16);
		lcd_string(s);
		delay_ms(500);
		c++;
	}
	else
	{
		if(c==0)
		{
			lcd_cmd(0x8f-i);
			lcd_string(s);
			delay_ms(500);
		}
		else
		{
			lcd_cmd(0x8f-l-i);
			lcd_string(s);
			delay_ms(500);
		}
	}
	lcd_cmd(0x01);
}
}
}


