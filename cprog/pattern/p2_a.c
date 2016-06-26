#include<stdio.h>

int main()
{
int i,j,k,l;
for(l=0;l<=11;l++)
{

if(l<=6)
{
	for(i=0;i<(6-l);i++)
	{
	printf(" ");
	}
	for(j=0;j<(2*l-1);j++)
	{
	printf("*");
	}
printf("\n");
k=9;
}
else
{
	for(i=0;i<(l-6);i++)
	{
	printf(" ");
	}
	for(j=0;j<k;j++)
	{
	printf("*");
	}
printf("\n");
k=k-2;
}
}
return 0;
}
