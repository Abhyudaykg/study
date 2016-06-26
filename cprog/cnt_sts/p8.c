#include<stdio.h>
int main()
{
int x=50,y=75,z=100;
int result;
result=(x+50?y>=75?z>100?1:2:3:4);
printf("%d",result);
return 0;
}
