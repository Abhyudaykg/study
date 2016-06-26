#include<stdio.h>
int main()
{
double d;
char *cp;
int i,j;

printf("Enter the double value=");
scanf("%lf",&d);
printf("\ndouble d=%lf\n",d);

cp=(char *)&d;
cp=cp+7;

printf("singbit\texponent\tsignificant part \n");
for(i=0;i<7;i++)
{
	for(j=7;j>=0;j--)
	{	printf("%d",*cp>>j&1);
		if(((i==0)&&(j==7))||((i==1)&&(j==4)))
			printf("\t");
	}	
cp=cp-1;

}

printf("\n");

return 0;
}

