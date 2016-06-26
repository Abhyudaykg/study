sfr LCD = 0x80;
sbit RS = P3^4;
sbit RW = P3^5;
sbit EN = P3^6;


void lcd_write(unsigned char val)
{
LCD = val;
RW = 0;
EN = 1;
	delay_ms(2);
EN =0;
}
void lcd_data(unsigned char _data)
{
RS =1;
lcd_write(_data);
}
void lcd_cmd(unsigned char cmd)
{
RS =0 ;
lcd_write(cmd);
}
void lcd_init()
{
lcd_cmd(0x02);//cur on home
lcd_cmd(0x38);//8bit lcd
lcd_cmd(0x0E);//cur on
lcd_cmd(0x06);//shift right
lcd_cmd(0x01);//clear lcd
lcd_cmd(0x80);//1st line
}
void lcd_string(char *s)
{
while(*s)
	lcd_data(*s++);
}

void lcd_int(int num)
{
char buf[10],i=0;
if(num ==0)
{
lcd_data('0');
return;
}
if(num<0)
{
lcd_data('-');
num=-num;
}
while(num)
{
buf[i++]=num%10+48;
num/=10;
}
for(--i;i>=0;i--)
{
	lcd_data(buf[i]);
}
}
void lcd_float(float f)
{

int n = f;
lcd_int(n);
lcd_data('.');

n=(f-n)*1000;
if(n<0)
	n=-n;
lcd_int(n);
delay_ms(500);
}


void lcd_hex(unsigned int num)
{
if(num ==0)
{
lcd_data('0');
return;
}
if(num>15)
{			    
if(num/15>9)
{
	if(num/15==10)
	   lcd_data('A');
	if(num/15==11)
	   lcd_data('B');
	if(num/15==12)
	   lcd_data('C');
	if(num/15==13)
	   lcd_data('D');
	if(num/15==14)
	   lcd_data('E');
	if(num/15==15)
	   lcd_data('F');
}
else
{
	lcd_int(num/15);
}


if(num%15-1>9)
{
	if(num%15-1==10)
	   lcd_data('A');
	if(num%15-1==11)
	   lcd_data('B');
	if(num%15-1==12)
	   lcd_data('C');
	if(num%15-1==13)
	   lcd_data('D');
	if(num%15-1==14)
	   lcd_data('E');
	if(num%15-1==15)
	   lcd_data('F');
}
else
{
lcd_int(num%15-1);
}
}
else
{
if(num>9)
{
	if(num==10)
	   lcd_data('A');
	if(num==11)
	   lcd_data('B');
	if(num==12)
	   lcd_data('C');
	if(num==13)
	   lcd_data('D');
	if(num==14)
	   lcd_data('E');
	if(num==15)
	   lcd_data('F');
}
else
{
	lcd_int(num);
}




}
}
