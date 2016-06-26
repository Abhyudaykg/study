void delay_ms(unsigned int n)
{
unsigned char i;
for(;n;n--)
{
	for(i=250;i;i--);
	for(i=247;i;i--);
}
}