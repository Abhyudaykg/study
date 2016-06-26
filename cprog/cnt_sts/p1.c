#include<stdio.h>
int main()
{
int f;
unsigned long int o=1;
printf("Enter the value for what you want to find the factorial \n");
scanf("%d",&f);
printf("your entered value is f=%d \n",f);


int i;
for(i=f;i>0;i--)
{
o=o*i;
}
printf("the factorial value for %d is %lu \n ",f,o);
return 0;
}
