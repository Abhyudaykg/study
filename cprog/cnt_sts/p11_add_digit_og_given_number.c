#include<stdio.h>
int main()
{
int num;

printf("Enter the number=");
scanf("%d",&num);
printf(" \nnum=%d \n",num);
int sum;
for(sum=0;num>0;sum=sum+num%10,num=num/10);
printf("sum=%d \n",sum);

return 0;
}
