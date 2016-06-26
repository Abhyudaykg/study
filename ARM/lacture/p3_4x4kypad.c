#include<LPC214X.H>
#include"delay.h"
#include"lcd8bit.h"
#include"keypad.h"

main()
{	IODIR1=LCD|RS|EN;
	lcd_init();
	while(1)
	{	lcd_string("while");
		lcd_data(keyscan());
		delay_ms(5000);
		lcd_cmd(0x01);
	}

}
