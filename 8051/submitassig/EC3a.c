//V15BE5A1
//14/03/2016
#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include<string.h>

code unsigned char s[]="Abhyuday";
main()
{
char i;
unsigned char l=strlen(s);
unsigned char c=0;
lcd_init();
while(1)
{
for(i=0;i<16;i++)
{
	if(0x8f-l<0x80+i)
	{
		lcd_cmd(0x80);
		lcd_string(&s[16-i]);
		//lcd_cmd(0x80+i-16);
		lcd_cmd(0x80+i);
		lcd_string(s);
		delay_ms(500);
		
	}
	else
	{
		lcd_cmd(0x80+i);
		lcd_string(s);
		delay_ms(500);
	}
	lcd_cmd(0x01);
	}
}
	
}



