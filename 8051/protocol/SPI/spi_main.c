#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include"adcspi.h"

main()
{
float temp;
lcd_init();
while(1)
{
temp=read_adc();
lcd_cmd(0x01);
lcd_float(temp);
}
}
