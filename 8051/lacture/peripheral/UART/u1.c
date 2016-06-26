#include<reg51.h>
#include "delay.h"
#include "uart.h"
#include "lcd8bit.h"

main()
{
unsigned char temp;
uart_init();
lcd_init();


	while(1)
	{
		temp=uart_rx();
		uart_tx(temp);
		lcd_data(temp);
	}
}