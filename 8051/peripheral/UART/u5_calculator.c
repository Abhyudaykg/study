#include<reg51.h>
#include "delay.h"
#include "prog.h"
#include "uart.h"

main()
{
float n1=0;
float	n2=0;
unsigned char op;
float ans=0;
unsigned int num=0;

uart_init();
	uart_string("Enter the expresion=");

do
{
	num=uart_rx();
	num=num-48;
	if(num<10)
	{
	uart_int(num);
	n1=n1*10+num;
	}
}while(num<10);
//uart_string("\n");
//uart_int(n1);
n2=0;
op=num+48;
uart_tx(op);
num=0;

do
{
	num=uart_rx();
	num=num-48;
	if(num<10)
	{
		uart_int(num);
		n2=n2*10+num;
	}
}while(num<10);
//uart_string("\n");
//uart_int(n1);

ans=calc(n1,n2,op);
uart_string("\n");

uart_float(n1);
uart_string(" ");

uart_tx(op);
uart_string(" ");

uart_float(n2);
uart_string(" ");

uart_tx('=');
uart_string(" ");

uart_float(ans);
uart_string("\n");


}