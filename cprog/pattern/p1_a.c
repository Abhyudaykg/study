#include<stdio.h>
int main()
{
int i,j,k,l;
k=9;
for(l=1;l<=k;l++)
{
if(l<=5)
{
	for(i=0;i<(5-l);i++)
	{
	printf(" ");
	}
	for(j=1;j<=l;j++)
	{
	printf("* ");
	}
printf("\n");
}
else
{
	for(i=0;i<(l-5);i++)
	{
	printf(" ");
	}
	for(j=0;j<(10-l);j++)
	{
	printf("* ");
	}

printf("\n");
}

}

return 0;
}
