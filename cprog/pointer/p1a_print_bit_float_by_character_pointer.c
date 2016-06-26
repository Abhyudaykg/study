#include<stdio.h>
int main()
{
float f;
char *cp;
int i,j;

printf("Enter the float value=");
scanf("%f",&f);
printf("\nfloat f=%f\n",f);

cp=(char *)&f;
cp=cp+3;

printf("singbit\texponent\tsignificant part \n");
for(i=0;i<4;i++)
{
	for(j=7;j>=0;j--)
	{	printf("%d",*cp>>j&1);
		if(((i==0)&&(j==7))||((i==1)&&(j==7)))
			printf("\t");
	}	
cp=cp-1;

}

printf("\n");

return 0;
}
