#include<reg51.h>

#include"delay.h"
#include"lcd8bit.h"
#include"uart.h"

main()

{
unsigned char temp;
	uart_init();
	uart_string("vector \r\ninstitute\r\n");
	while(1);
}