void delay_s(unsigned char n)
{
unsigned char i,j,k;
for(;n;n--)
	{
	for(k=8;k>0;k--)
		for(i=250;i>0;i--)
			for(j=249;j>0;j--);
	}
}


void delay_ms(unsigned char n)
{
unsigned char i;
	for(;n>0;n--)
	{
	 for(i=250;i>0;i--);
	 for(i=247;i>0;i--);
	}
}

main()
{

delay_s(1);
	while(1);

}
	