#include<stdio.h>
int Dec2Bin(int temp,int rm);
int temp;
int reminder;
int main()
{
int decimal;
printf("Enter the Decimal number you want to convert into binary Decimal=");
scanf("%d",&decimal);
Dec2Bin(decimal,reminder);
printf("\n");
return 0;
}
int Dec2Bin(int temp,int rm)
{	while(temp>0)
{
	rm=temp%2;
	temp=temp/2;
	Dec2Bin(temp,rm);
	printf("%d",rm);
return rm;
}
return;
}
