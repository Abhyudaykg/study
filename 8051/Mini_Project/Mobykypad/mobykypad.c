#include<reg51.h>
#include"delay.h"
#include"keypad.h"
#include"lcd8bit.h"


data unsigned int rcold[2];
data unsigned int *rcnew;
data unsigned char count=0;
data unsigned char addr=0x80;
data unsigned char a[16]={0};
main()
{
	lcd_init();
rcnew=keyscan();
rcold[0]=rcnew[0];
rcold[1]=rcnew[1];
delay_ms(100);
	lcd_cmd(addr);
	if(count==0&&rcold[0]<3&&rcold[1]<3)
		lcd_int(kpad[count][rcold[0]][rcold[1]]);
	else
		lcd_data(kpad[count][rcold[0]][rcold[1]]);
newky:
	 
rcnew=keyscan();
delay_ms(100);
	
	if( (rcold[0] == rcnew[0]) && (rcold[1]==rcnew[1]) )
	{
			count++;
				if(count==4)
						count=0;
			
				lcd_cmd(addr);
				if(count==0&&rcold[0]<3&&rcold[1]<3)
					lcd_int(kpad[count][rcold[0]][rcold[1]]);
				else
					lcd_data(kpad[count][rcold[0]][rcold[1]]);
				goto newky;

	}
	else
	{		
			lcd_cmd(++addr);
			if(count==0&&rcold[0]<3&&rcold[1]<3)
				lcd_int(kpad[count][rcold[0]][rcold[1]]);
			else
				lcd_data(kpad[count][rcold[0]][rcold[1]]);
					count=0;
			rcold[0]=rcnew[0];
			rcold[1]=rcnew[1];
			lcd_cmd(addr);
			if(count==0&&rcold[0]<3&&rcold[1]<3)
				lcd_int(kpad[count][rcold[0]][rcold[1]]);
			else
				lcd_data(kpad[count][rcold[0]][rcold[1]]);
				goto newky;
	}

}