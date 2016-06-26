#include<stdio.h>
int main()
{
int num;
printf("Enter the number=");
scanf("%d",&num);
printf("num =%d",num);

int bit=sizeof(int)*8-1;

abc:
if(num>>bit&1)
	printf("1");
else
	printf("0");
	bit--;
if(bit>=0)
goto abc;
return 0;
}
