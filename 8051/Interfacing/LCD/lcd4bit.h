sfr LCD = 0x80;
sbit RS = P2^0;
sbit RW = P2^1;
sbit EN = P2^2;


void lcd_data(unsigned char _data)
{
LCD = (_data&0xf0);
RS =1;
RW = 0;
EN = 1;
	delay_ms(2);
EN =0;
LCD = (_data&0x0f)<<4;
RS =1;
RW = 0;
EN = 1;
	delay_ms(2);
EN =0;
}
void lcd_cmd(unsigned char cmd)
{
LCD = (cmd&0xf0);
RS =0;
RW = 0;
EN = 1;
	delay_ms(2);
EN =0;
LCD = (cmd&0x0f)<<4;
RS =0;
RW = 0;
EN = 1;
	delay_ms(2);
EN =0;

}
void lcd_init()
{
lcd_cmd(0x02);//cur on home
lcd_cmd(0x28);//8bit lcd
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
