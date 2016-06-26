#include<reg51.h>
#include"delay.h"
#include"lcd4bit.h"

main()
{
lcd_init();
while(1)
{
lcd_cmd(0x80);
lcd_data('A');
delay_ms(500);
}


}