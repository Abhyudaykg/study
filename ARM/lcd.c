#include<LPC214X.h>
#include"delay.h"
#include"lcd8bit.h"

main()
{
IODIR1=LCD|RS|EN;
lcd_init();
	while(1)
	{	lcd_cmd(0x80);
		lcd_string("Abhyuday");
		delay_ms(1000);
	}
}
