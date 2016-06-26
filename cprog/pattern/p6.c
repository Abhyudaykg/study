#include<stdio.h>
int main()
{
int i,j,k;
char ch='z';

for(j=0;j<32;j++)
{
	for(i=-31;i<=31;i++)
	{
	k=i;
	if(k<0)
		k=-k;
	if(k>=j)
		printf("%c ",ch-k);
	else
		printf("**");
	}
printf("\n");
}
return 0;
}
