#include<stdio.h>
int main()
{
int i,j,k;
int r;
scanf("%d",&r);

for(i=-(r/2);i<=(r/2);i++)
{
k=i;
if(k<0)
	k=-k;
for(j=0;j<=(r/2);j++)
{
if(j<k)
printf(" ");
else
	printf("* ");

}
printf("\n");
}
return 0;
}
