#include<stdio.h>
int main()
{
int x,y;
scanf("%d",&x);
y=(x<0)?-x:x;
printf("absolute value of %d is %d \n",x,y);
return 0;
}
