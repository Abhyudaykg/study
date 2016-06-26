#include<stdio.h>
int main()
{
int num;

printf("num=");
scanf("%d",&num);
printf("num=%d\n",num);

int i;
int j;
// print the number binary
for(i=sizeof(int)*8-1;i>=0;i--)
	if(num>>i&1)
		printf("1");
	else
		printf("0");
printf("\n");
// reverse the bit

for(i=sizeof(int)*8-1,j=0;j<i;j++,i--)
{
if((num>>i&1)!=(num>>j&1))
{	num=num^1<<i;
	num=num^1<<j;
}
}
// print the new bit
for(i=sizeof(int)*8-1;i>=0;i--)
	if(num>>i&1)
		printf("1");
	else
		printf("0");

printf("\n");

return 0;
}
