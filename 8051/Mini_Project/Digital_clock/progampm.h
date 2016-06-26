sbit SW1 = P3^0;// up
sbit SW2 = P3^1;//down
sbit SW3 = P3^2;//next
sbit SW4 = P3^3;//start clock;

void lcdfirst()
{
  lcd_cmd(0x80);
  lcd_string("1>Display time");
	lcd_cmd(0xc0);
	lcd_string("2>Set time");
	delay_ms(500);
	lcd_cmd(0x01);
}
//............................Hr............................//
void set_hr()
{	while(SW2==0);
	lcd_cmd(0x01);
	lcd_string("Hr:");
	if(hr>11)
	{
	lcd_int(hr-12);
	lcd_string(pm);
	}
	else
	{
		lcd_int(hr);
		lcd_string(am);
	}
//while(SW1&&SW2);
if(SW1==0)
{
hr++;
	while(SW1==0);
	delay_ms(200);
	if(hr>23)
			hr=0;
	lcd_cmd(0x01);
	lcd_string("Hr:");
	lcd_int(hr);
	
}
if(SW2==0)
{
hr--;
	while(SW2==0);
	delay_ms(200);
	if(hr<0)
			hr=23;
	lcd_cmd(0x01);
	lcd_string("Hr:");
	lcd_int(hr);
}
}
//................................Mn..........................//

void set_mn()
{	while(SW2==0);
	lcd_cmd(0x01);
	lcd_string("mn:");
	lcd_int(mn);

//while(SW1&&SW2);
if(SW1==0)
{
mn++;
	while(SW1==0);
	delay_ms(200);
	if(mn>59)
			mn=0;
	lcd_cmd(0x01);
	lcd_string("mn:");
	lcd_int(mn);
	
}
if(SW2==0)
{
mn--;
	while(SW2==0);
	delay_ms(200);
	if(mn<0)
			mn=59;
	lcd_cmd(0x01);
	lcd_string("mn:");
	lcd_int(mn);
}
}
//................................Second..............................//

void set_se()
{	while(SW2==0);
	lcd_cmd(0x01);
	lcd_string("se:");
	lcd_int(se);

//while(SW1&&SW2);
if(SW1==0)
{
se++;
	while(SW1==0);
	delay_ms(200);
	if(se>59)
			se=0;
	lcd_cmd(0x01);
	lcd_string("se:");
	lcd_int(se);
	
}
if(SW2==0)
{
	se--;
	while(SW2==0);
	delay_ms(200);
	if(se<0)
			se=59;
	lcd_cmd(0x01);
	lcd_string("se:");
	lcd_int(se);
}
}
//..................................................................//
void clock()
{
	while(1)
	{
		if(hr==24)
				hr=0;
		for(hr;hr<24;hr++)
		{	
			if(mn==60)
				mn=0;
			for(mn;mn<60;mn++)
			{	
				if(se==60)
				se=0;
				for(se;se<60;se++)
				{	
					lcd_cmd(0x01);
					lcd_cmd(0x80);
					if(hr>11)
					{
						lcd_int(hr-12);
						lcd_data(':');
						lcd_int(mn);
						lcd_data(':');
						lcd_int(se);
						lcd_string(pm);
						delay_ms(1000);
					}
					else
					{  
						lcd_int(hr);
						lcd_data(':');
						lcd_int(mn);
						lcd_data(':');
						lcd_int(se);
						lcd_string(am);
						delay_ms(1000);
					}
				}
			}
		}
	}
}



