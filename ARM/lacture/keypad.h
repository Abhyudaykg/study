#define C0 (1<<0);
#define C1 (1<<1);
#define C2 (1<<2);
#define C3 (1<<3);

#define R0 (1<<4);
#define R1 (1<<5);
#define R2 (1<<6);
#define R3 (1<<7);

/*
#define ca (IOPIN0 & (1<<0));
#define cb (IOPIN0 & (1<<1));
#define cc (IOPIN0 & (1<<2));
#define cd (IOPIN0 & (1<<3));
*/
char kpad[4][4]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int colscan()
{	lcd_cmd(0x01);
	lcd_data('C');
	return ((IOPIN0&(1<<0))&&(IOPIN0&(1<<1))&&(IOPIN0&(1<<2))&&(IOPIN0&(1<<3)));
}

char keyscan()
{
unsigned char row,col ;
IODIR0=0X000000ff;
IODIR0=0X000000f0;
	
IOCLR0=R0;
IOCLR0=R1;
IOCLR0=R2;
IOCLR0=R3;

IOSET0=C0;
IOSET0=C1;
IOSET0=C2;
IOSET0=C3;


while(colscan()==1);

IOCLR0=R0;
IOSET0=R1;
IOSET0=R2;
IOSET0=R3;

if(colscan()==0)
{
	lcd_data('0');
	row=0;
	goto colcheck;
}
IOSET0=R0;
IOCLR0=R1;
IOSET0=R2;
IOSET0=R3;
if(colscan()==0)
{
	lcd_data('1');
	row=1;
	goto colcheck;
}
IOSET0=R0;
IOSET0=R1;
IOCLR0=R2;
IOSET0=R3;

if(colscan()==0)
{
	lcd_data('2');
	row=2;
	goto colcheck;
}

IOSET0=R0;
IOSET0=R1;
IOSET0=R2;
IOCLR0=R3;

if(colscan()==0)
{
	lcd_data('3');
	row=3;
	goto colcheck;
}

colcheck:
lcd_data('K');
	if(!(IOPIN0 & (1<<0)))
	{
			lcd_data('a');
			col=0;
	}
	if(!(IOPIN0 & (1<<1)))
	{lcd_data('b');
		col=1;
	}
	if(!(IOPIN0 & (1<<2)))
	{
			lcd_data('c');
		col=2;
	}
		if(!(IOPIN0 & (1<<3)))
		{
lcd_data('d');
			col=3;
		}
	lcd_data(col);
	delay_ms(100);
	while(colscan()==0);
	lcd_data('R');
	return (kpad[row][col]);
}
