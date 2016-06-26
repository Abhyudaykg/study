void delay_s(unsigned char n)
{
unsigned char i,j,k;
	for(;n>0;n--)
	{
	for(k=8;k>0;k--)
		for(i=250;i>0;i--)
			for(j=249;j>0;j--);
	}
}
