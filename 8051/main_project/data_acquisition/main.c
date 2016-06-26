#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include"i2c.h"
#include"i2c_device.h"
#include"rtc_main.h"
#include"uart.h"
#include"adcspi.h"
#include<string.h>


float voltadc=0;
float voltldr=0;

int main()
{
lcd_init();
uart_init();
rtc_set();

while(1)
{
	rtc_main();
	voltadc=read_adc();
	voltldr=read_ldr();

	lcd_string("Time=");
	lcd_string(rtc_buff);

	lcd_cmd(0xc0);
	lcd_string("Va=");
	lcd_float(voltadc);

	lcd_data(' ');
	lcd_string("vl=");
	lcd_float(voltldr);

	uart_tx('\r');
	uart_tx('\n');
	uart_string("Time=");
	uart_string(rtc_buff);
	uart_tx('\r');
	uart_tx('\n');
	uart_string("voltage_adc=");
	uart_float(voltadc);
	uart_string("  voltage_ldr=");
	uart_float(voltldr);
	
	delay_ms(1000);
	lcd_cmd(0x80);
	uart_tx(12);

}


return 0;
}