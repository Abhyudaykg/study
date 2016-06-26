#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include"i2c.h"
#include"i2c_device.h"
#include<string.h>

code unsigned char a[]="vector";
main()
{
unsigned char temp;
unsigned char i=0;
unsigned char WA=0x00;
	
	lcd_init();
	lcd_cmd(0x01);
	while(a[i])
	{
		i2c_device_write(0xA0,WA+i,a[i]);
		i++;
	}
	i2c_device_write(0xA0,WA+i,'\0');

	i=0;
	do
	{
			temp=i2c_device_read(0xA0,WA+i);
			if(temp)
				lcd_data(temp);
			i++;
	}while(temp);
	
	while(1);
	}