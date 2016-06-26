#include<stdio.h>
int Dec2Hex(int temp,int rm);
int main()
{

int decimal;
int hex;
int reminder=0;
printf("Enter the Decimal number");
scanf("%d",&decimal);
printf("decimal=%d \n",decimal);
Dec2Hex(decimal,reminder);
return 0;
}

int Dec2Hex(int temp,int rm)
{
if(temp <= 0)
	return;

	rm=temp%16;
	temp=temp/16;

	Dec2Hex(temp,rm);
	if(rm > 9)
	{
	rm=((int)'A')+(rm-10);
	printf("%c",rm);
	}
	else
	printf("%d",rm);

return rm;
}
