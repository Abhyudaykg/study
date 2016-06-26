void uart_init()
{
SCON=0x50;// REN=1,scon universal mode....
TMOD=0x20;// timer1,mode2........
TH1=TL1=253;// 9600 baudr5ate.......
TR1=1;// start timer1.....
}
void uart_tx(unsigned char _data)
{
SBUF=_data;
while(TI==0);
TI=0;
}

unsigned char uart_rx()
{
while(RI==0);
RI=0;
return SBUF;
}

void uart_string(char *s)
{
while(*s)
		uart_tx(*s++);
}

void uart_int(int num)
{
char buf[10],i=0;
if(num ==0)
{
uart_tx('0');
return;
}
if(num<0)
{
uart_tx('-');
num=-num;
}
while(num)
{
buf[i++]=num%10+48;
num/=10;
}
for(--i;i>=0;i--)
{
	uart_tx(buf[i]);
}
}
void uart_float(float f)
{

int n = f;
uart_int(n);
uart_tx('.');

n=(f-n)*1000;
if(n<0)
	n=-n;
uart_int(n);
}


