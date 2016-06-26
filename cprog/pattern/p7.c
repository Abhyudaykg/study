#include<stdio.h>
int main()
{
int i,j,k;

for(i=-3;i<=3;i++)
{
k=i;
if(k<0)
	k=-k;
	for(j=3;j>-1;j--)
	{
	if(k<j)
		printf(" ");
	else
		printf("* ");
	}
printf("\n");
}
return 0;
}
