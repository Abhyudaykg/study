#include<stdio.h>
int main()
{
double d;
int *ip;
int i,j;

printf("Enter the double value=");
scanf("%lf",&d);
printf("\ndouble d=%lf\n",d);

ip=(int *)&d;
ip=ip+2;

printf("singbit\texponent\tsignificant part \n");
for(i=0;i<2;i++)
{
	for(j=31;j>=0;j--)
	{	printf("%d",*ip>>j&1);
		if(((i==0)&&(j==31))||((i==0)&&(j==20)))
			printf("\t");
	}	
ip=ip-1;

}

printf("\n");

return 0;
}

