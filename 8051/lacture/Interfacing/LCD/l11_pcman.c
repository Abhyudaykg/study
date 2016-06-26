#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include"cgram.h"
#include<string.h>

code unsigned char s[]="Abhyuday";

main()
{
unsigned char l=strlen(s),i,j,k;
lcd_init();
build_cgram();
while(1)
{
while(1)
{  for(i=0;i<l;i++)
	{
	lcd_cmd(0x80);
	lcd_string(s);
		for(j=0x80+l;j>=0x80;j--)
		{		
			lcd_cmd(j);
			lcd_data(0);
			delay_ms(500);
			lcd_cmd(j-1);
			lcd_data(1);
			for(k=j;k<0x90;k++)
			{
				lcd_cmd(k);
				lcd_data(' ');
			}
			delay_ms(500);

		}
	}
}
}
}