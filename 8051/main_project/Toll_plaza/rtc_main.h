unsigned char hr=0x11;
unsigned char mn=0x59;
unsigned char sc=0x55;
unsigned char rtc_buff[10];

unsigned char dd=0x20;
unsigned char mm=0x12;
unsigned char yy=0x2020;
unsigned char temp;

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

void rtc_set()
{
i2c_device_write(0xD0,0x02,hr|(1<<6));
i2c_device_write(0xD0,0x01,mn);
i2c_device_write(0xD0,0x00,sc);
}

void rtc_main()
{	
	hr=i2c_device_read(0xD0,0x02);
	rtc_buff[0]=(hr&0x1f)/16+48;
	rtc_buff[1]=(hr&0x1f)%16+48;
	rtc_buff[2]=':';
	
	mn=i2c_device_read(0xD0,0x01);
	rtc_buff[3]=mn/16+48;
	rtc_buff[4]=mn%16+48;
	rtc_buff[5]=':';
	
	sc=i2c_device_read(0xD0,0x00);
	rtc_buff[6]=sc/16+48;
	rtc_buff[7]=sc%16+48;
	
	rtc_buff[8]=' ';
	
	if(hr & (1<<5))
	{
		rtc_buff[9]='P';
		rtc_buff[10]='M';
	}
	else 
	{
		rtc_buff[9]='A';
		rtc_buff[10]='M';
	}
	
	rtc_buff[11]='\0';
	
	lcd_cmd(0x80);
	lcd_string(rtc_buff);
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
