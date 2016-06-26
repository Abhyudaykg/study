#include<stdio.h>
int main()
{
int num;

printf("num=");
scanf("%d",&num);
printf("\n num=%d \n",num);
int i;
if(num==1)
	goto abc;
for(i=2;num%i&&i<num;i++);
if(i==num)
abc:	printf("number is prime \n");
else
	printf("number is not prime \n");

return 0;
}











/*int main()
{
int num;

printf("Enter the number you wantr to check prime or not ,num=");
scanf("%d",&num);
printf("\n num=%d \n",num);

int i;
int c=0;
if(num==1)
	goto abc;
//for(i=1;i<=num;i++)
for(i=2;i<num;i++)
{
if(num%i==0)
	c++;
}
//if(c==2)	
if(c==0)
abc : printf("number is prime \n");
else
printf("number is not a prime \n");

return 0;
}*/
