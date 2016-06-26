#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"

main()
{
float num= -12.456;
lcd_init();
lcd_float(num);


}