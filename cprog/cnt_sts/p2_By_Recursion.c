#include<stdio.h>
int sum(int);
int main()
{
int di;
printf("enter the value \n");
scanf("%d",&di);
printf("%d \n",sum(di));
return 0;
}
int sum(int d)
{
int y=0;
int last;
if(d==0)
{
return 0;
}
y=d%10;
d=d/10;
y=y+sum(d);
return y;
}
