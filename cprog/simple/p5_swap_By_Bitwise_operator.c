#include<stdio.h>
int main ()
{
int i,j;
int k;


printf("Enter the two value in Hexadecimal= \n");
scanf("%x %x",&i,&j);
printf("without swap i=%d j=%d \n",i,j);
i=i^j; // bitwise X-OR
j=i^j;
i=i^j;
printf("after swap i=%x j=%x \n",i,j);
return 0;
}
