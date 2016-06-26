#include<stdio.h>
int main()
{
int i,j,k;
int r;
//scanf("%d",&r);

for(i=-(6);i<=(6);i++)
{

//if(k<0)
//	k=-k;
for(j=-6;j<=6;j++)
{
k=j;
if(k<0)
	k=-k;
if(i<k)
printf(" ");
else
	printf("*");

}
printf("\n");
}
return 0;
}
