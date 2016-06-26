#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include"i2c.h"
#include"i2c_device.h"
#include<string.h>

unsigned char hr=0x09;
unsigned char mn=0x10;
unsigned char sc=0x10;

unsigned char dd=0x20;
unsigned char mm=0x12;
unsigned char yy=0x2020;

void month(unsigned char temp)
{
switch(temp)
	{
		case 0x01: lcd_string("jan");
								break;
		case 0x02: lcd_string("Feb");
								break;
		case 0x03: lcd_string("mar");
								break;
		case 0x04: lcd_string("Apr");
								break;
		case 0x05: lcd_string("may");
								break;
		case 0x06: lcd_string("jun");
								break;
		case 0x07: lcd_string("jly");
								break;
		case 0x08: lcd_string("aug");
								break;
		case 0x09: lcd_string("sep");
								break;
		case 0x10: lcd_string("oct");
								break;
		case 0x11: lcd_string("nov");
								break;
		case 0x12: lcd_string("Dec");
								break;
	}
}
main()
{
unsigned char temp;
	lcd_init();
	
	i2c_device_write(0xD0,0x02,hr);
	i2c_device_write(0xD0,0x01,mn);
	i2c_device_write(0xD0,0x00,sc);
	i2c_device_write(0xD0,0x04,dd);
	i2c_device_write(0xD0,0x05,mm);
	i2c_device_write(0xD0,0x06,yy);
while(1)
{
	lcd_cmd(0x80);
	temp=i2c_device_read(0xD0,0x02);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
	lcd_data(':');
	
	temp=i2c_device_read(0xD0,0x01);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
	lcd_data(':');
	
	temp=i2c_device_read(0xD0,0x00);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
	
	lcd_string("  ");
	if(hr&(1<<5))
		lcd_string("PM");
	else 
		lcd_string("AM");
	
	lcd_cmd(0xc0);
	
	temp=i2c_device_read(0xD0,0x04);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
	lcd_data(':');
	
	temp=i2c_device_read(0xD0,0x05);
	month(temp);
	lcd_data(':');
	
	lcd_int(20);
	temp=i2c_device_read(0xD0,0x06);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
	
}
}