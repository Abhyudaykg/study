//code unsigned char cgram_lut[]={0x17,0x14,0x14,0xf0,0x05,0x05,0x1d,0x00};
#include<reg51.h>
#include"delay.h"
#include"lcd8bit.h"
#include"cgram.h"


main()
{
lcd_init();
build_cgram();
lcd_data(0);
lcd_data(1);
lcd_data(2);
while(1);

}