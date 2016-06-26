#include<reg51.h>
#include"delay.h"
#include"uart.h"
#include"progpass.h"


code unsigned char usr1[]="00326204";
code unsigned char usr2[]="15645745";
unsigned char ret;
unsigned char usr[10];
unsigned char i;
main()
{
uart_init();



	uart_rx();
	for(i=0;i<8;i++)
		{
			usr[i]=uart_rx();
		}
		uart_string(usr);
uart_string("\n");
ret=my_comp(usr1,usr,8);
		if(ret==1)
				uart_string("welcome abhyuday\n");
		else
		{ret=my_comp(usr2,usr,8);
				if(ret==1)
						uart_string("welcome uvabrkhi\n");
				else
						uart_string("you not permitted\n");
		}
}