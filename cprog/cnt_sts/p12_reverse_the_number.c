#include<stdio.h>
int main()
{
int num;

printf("Enter the number=");
scanf("%d",&num);
printf("\n num=%d \n",num);

int sum;
for(sum=0;num>0;sum=sum*10+num%10,num=num/10);
printf("new num=%d\n",sum);
return 0;
}
