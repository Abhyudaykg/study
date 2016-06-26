#include<reg51.h>
#include"delay.h"
#include"uart.h"
#include"prog.h"
#include<string.h>


code unsigned char pass[]="abhyuday";
main()
{
unsigned char p[20];
unsigned char temp;
unsigned char l1=strlen(pass);
unsigned char l2;
unsigned char ret;
	unsigned char j=0;
uart_init();
	
	{
	uart_string("Enter the password:");
	
	do
	{
		temp=uart_rx();
		uart_tx('*');
		p[j++]=temp;
	}while(temp!=13);
	
	p[--j]='\0';
	l2=strlen(p);
	
	uart_string("\n");
	//uart_int(l1);
	//uart_string("\n");
	//uart_int(l2);
	
	if(l2==l1)
	{
		ret=my_comp(pass,p,l2);
		
		if(ret==1)
				uart_string("\nvalid pass \r\n");
		else
				uart_string("\nInvalid pass \r\n");
	}
	else
	{
		uart_string("\nInvalid pass\r\n");
	}
	
}

}