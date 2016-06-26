unsigned char hr=0x11;
unsigned char mn=0x59;
unsigned char sc=0x55;
unsigned char rtc_buff[10];


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
}
