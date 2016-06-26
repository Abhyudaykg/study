#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"

main()
{
unsigned char i;
lcd_init();
for(i=0;i<60;i++)
{
lcd_data(i/10+48);
lcd_data(i%10+48);
delay_ms(500);
lcd_cmd(0x01);
}
}