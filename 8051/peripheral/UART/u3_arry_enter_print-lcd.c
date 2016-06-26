#include<reg51.h>
#include"uart.h"
#include"delay.h"
#include"lcd8bit.h"

main()
{
unsigned char temp;
unsigned char a[10];
	unsigned char i=0;

	uart_init();
lcd_init();

	do
	{		
		temp=uart_rx();
		uart_tx(temp);
		a[i++]=temp;
		lcd_cmd(0x01);
		lcd_data(temp);
		lcd_cmd(0x85);
		lcd_int(temp);
		lcd_cmd(0x89);
		lcd_string("0x");
		lcd_hex(temp);
		delay_ms(1000);
	}while(temp!=13);
	a[--i]='\0';
	lcd_cmd(0xc0);
	lcd_string(a);
	delay_ms(5000);
}