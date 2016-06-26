#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include"i2c.h"
#include"i2c_device.h"
#include<string.h>

main()
{
unsigned char temp;
	lcd_init();
	
	i2c_device_write(0xD0,0x00,0x10);
while(1)
{
temp=i2c_device_read(0xD0,0x00);
	lcd_cmd(0x80);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
}
}