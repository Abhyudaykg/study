#include<stdio.h>
int main()
{
int num;
int fact=1;
printf("Enter the number=");
scanf("%d",&num);
printf("\nnum=%d\n",num);
for(;num;num--)
{
fact=fact*num;
}
printf("%d \n",fact);
return 0;
}
