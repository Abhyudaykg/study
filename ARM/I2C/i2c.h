#define SCL=0x01;
#define SDA=0x02;
unsigned char i2c_read()
{
unsigned char temp=0;
char i=0;
	for(i=7;i>=0;i--)
		{
			IOSET0=SCL;
					if((IOPIN0 & SDA)==1)
							temp=temp | (1<<i);
			IOCLR0=SCL;
		}
}

void i2c_write(unsigned char _data)
{
char i;
	for(i=7;i>=0;i--)
		{
			IOCLR0=SCL;
			IOSET0=SDA & ((_data&(1<<i))?1:0);
			IOSET0=SCL;
		}
}
void i2c_start()
{
	IOSET0=SCL;
	IOSET0=SDA;
	IOCLR0=SDA;
}
void i2c_stop()
{
	IOCLR0=SCL;
	IOCLR0=SDA;
	IOSET0=SCL;
	IOSET0=SDA;
}

void i2c_ack()
{
	IOCLR0=SCL;
	IOSET0=SDA;
	IOSET0=SCL;
	while((IOPIN0&SDA)==1);
	IOCLR0=SCL;
}

void i2c_noack()
{
	IOCLR0=SCL;
	IOSET0=SDA;
	IOSET0=SCL;
}

