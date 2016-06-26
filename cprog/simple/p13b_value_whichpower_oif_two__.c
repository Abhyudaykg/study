#include<stdio.h>
int main()
{
long long int dub,num;
int power=0;

printf("Enter the number \n num=");
scanf("%lld",&num);
dub=num;
while(num!=1)
{
num=num>>1;
power++;
}
printf("%lld = 2^%d",dub,power);
return 0;
}
