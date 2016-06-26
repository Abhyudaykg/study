#include<stdio.h>
int main()
{
int i,j,k,l;
for(l=0;l<=12;l++)
{
if(l<=6)
{
	for(i=0;i<l;i++)
	{
	printf(" ");
	}
	for(j=0;j<=(6-l);j++)
	{
	printf("* ");
	}
printf("\n");
k=5;
}
else
{
	for(i=0;i<k;i++)
	{
	printf(" ");
	}
	for(j=0;j<(l-5);j++)
	{
	printf("* ");
	}
printf("\n");
k--;
}
}
return 0;
}
