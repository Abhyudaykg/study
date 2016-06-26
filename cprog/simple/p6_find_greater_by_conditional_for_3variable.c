// in this programme i find the greator  number from 3 variable
#include<stdio.h>
int main()
{
int i,j,k;
printf("Enter the value of i,j,& k \n");
scanf("%d %d %d",&i,&j,&k);
printf("i=%d, j=%d, k=%d \n",i,j,k);
i>j&&i>k?printf("i is greator"):j>k?printf("j is greator"):printf("k is greator");


return 0;
}
