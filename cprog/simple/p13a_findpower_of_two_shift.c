#include<stdio.h>
int main()
{
int power;
long long int base;
long long int k;
base=2;
printf("Enter the power you want two to know of two \n power=");
scanf("%d",&power);
k=base<<power;
printf(" \n2^%d =%lld \n",power,k);
return 0;
}
