#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"

main()
{
lcd_init();
lcd_cmd(0x80);
lcd_data('A');
lcd_cmd(0xc0);
lcd_data('B');
while(1);
}