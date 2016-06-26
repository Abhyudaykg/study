#include<stdio.h>
#include<math.h>
int main()
{
int i,j,k,l;

for(l=0;l<=10;l++)
{
if(l<2||l>8)
{
	for(i=0;i<=15;i++)
		printf("*");
printf("\n");
}
else
{
	for(i=0;i<=15;i++)
	{
	if(i<3)
		printf(" ");
	if(i==3 || i==4 || i==14 || i==15)
		printf("*");
	if(i>4&&i<14)
		printf(" ");
	
	}
printf("\n");
}
}
return 0;
}
