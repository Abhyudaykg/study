#include<stdio.h>
int main()
{
float f=3.5;
int *ip,i;
ip=&f;
for(i=31;i>=0;i--)
	printf("%d",*ip>>i&1);
printf("\n");
return 0;
}
