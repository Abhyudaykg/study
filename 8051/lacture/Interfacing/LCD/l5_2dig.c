#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"

main()
{
int num=45;
lcd_init();
lcd_data(num/10+48);
lcd_data(num%10+48);
}