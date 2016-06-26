#include<stdio.h>
int main()
{
int n;

printf("Enter the value=");
scanf("%d",&n);
printf("\n value n=%d \n",n);
int i;
int last=0;
while(n!=0)
{
last=last+n%10;
n=n/10;
}
printf("sum=%d \n",last);
return 0;
}
