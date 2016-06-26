#include<stdio.h>
int main()
{
int v,i,j,k,l;
for(l=0;l<=10;l++)
{
if(l<5)
{
	for(i=0;i<l;i++)
	{
	printf(" ");
	}
	for(i=0;i<2;i++)
	{
	printf("*");
	}
	for(i=0;i<((6-l)-2);i++)
	{
	printf(" ");
	}
	for(i=0;i<((6-l)-2);i++)
	{
	printf(" ");
	}
	for(i=0;i<2;i++)
	{
	printf("*");
	}
printf("\n");
}
else
{	if(l==5)
		v=9,k=3;
	else
		v=10,k=2;
	for(i=0;i<(v-l);i++)
	{
	printf(" ");
	}
	for(i=0;i<k;i++)
	{
	printf("*");
	}
printf("\n");
}
}
return 0;
}
