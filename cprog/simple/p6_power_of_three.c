#include<stdio.h>
int main()
{
int num;
printf("Enter the number for which you want to check that is power of three or not=");
scanf("%d",&num);
printf("number=%d is",num);

int k;
if(num==1)
{
printf("power of three \n");
}
else
{
while(num>=1)
{
if(k==0&&num==1)
{
printf("number is power of three \n");
break;
}
else
{
k=num%3;
if(k==0)
{
num=num/3;
}
else
{
printf("number is not power of three \n");
break;
}
}
}
}
return 0;
}

