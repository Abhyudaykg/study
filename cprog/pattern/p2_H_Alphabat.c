#include<stdio.h>
int main()
{
int i,j,k,l;
for(l=0;l<=10;l++)
{
if(l!=5&&l!=6)
{
	for(i=0;i<=10;i++)
	{
	if(i<3||i>7)
		printf("*");
	else
	printf(" ");
	}
printf("\n");
}
else
{
	for(i=0;i<=10;i++)
	{
	printf("*");
	}
printf("\n");
}
}

return 0;
}
