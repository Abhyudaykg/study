#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"

main()
{
lcd_init();
lcd_data('A');
while(1);
}