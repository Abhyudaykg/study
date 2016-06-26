#include<reg51.h>
#include"uart.h"
#include"delay.h"
#include"lcd8bit.h"

main()
{
unsigned char temp;
uart_init();
lcd_init();


	while(1)
	{	
		temp=uart_rx();
		uart_tx(temp);
		lcd_cmd(0x01);
		lcd_data(temp);
		lcd_cmd(0x85);
		lcd_int(temp);
		lcd_cmd(0x89);
		lcd_string("0x");
		lcd_hex(temp);
		
		
	}
}