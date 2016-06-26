#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"

main()
{
char i;
lcd_init();
while(1)
{
for(i=0;i<16;i++)
{
lcd_cmd(0x8f-i);
lcd_string("Abhyuday");
delay_ms(500);
lcd_cmd(0x01);
}
}
}
