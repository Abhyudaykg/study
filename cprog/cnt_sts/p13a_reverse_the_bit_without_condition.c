// in this programe we can reverse the bit of number by one bitwise expretion 
#include<stdio.h>
int main()
{
unsigned int num;

printf("num=");
scanf("%d",&num);
printf("\n num=%d v\n",num);
int i;
// print the bit
for(i=sizeof(int)*8-1;i>=0;i--)
{
	if(num>>i&1)
		printf("1");
	else
		printf("0");
}
printf("\n");

//reverse the bit
unsigned int s=0;		// s must be unsigned other wise you got all 1.........
for(i=sizeof(int)*8-1;i>=0;i--)
{
s=((((num<<i)&(1<<sizeof(int)*8-1))>>((sizeof(int)*8-1)-i))|s);
}
// print the bit
for(i=sizeof(int)*8-1;i>=0;i--)
{
	if(s>>i&1)
		printf("1");
	else
		printf("0");
}
printf("\n");
return 0;
}
