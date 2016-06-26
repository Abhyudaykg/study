#include<stdio.h>
int main()
{
int decimal;
int binary[32]={0};
int reminder;
int temp;
int i,j,k;
k=0;
printf("Enter the Decimal number you want to convert into binary, decimal=");
scanf("%d",&decimal);
temp=decimal;
i=0;
while(temp > 0) 
{
	
	reminder=temp%2;
	temp=temp/2;
	binary[i++]=reminder;	
k++;
}
printf("out");
printf("The binary of decimal number %d =",decimal);
for(i=k-1;i>=0;i--)
{
printf("%d",binary[i]);
}

return 0;
}
