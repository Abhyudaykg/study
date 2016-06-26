#include<stdio.h>
int count(int);
int main()
{
int num;
int c;

printf("Enter the number=\n");
scanf("%d",&num);
printf("num=%d\n",num);

c=count(num);
printf("%d bit is set in %d \n",c,num);
return 0;
}
int count(int num)
{
int c=0;
int i;
for(i=31;i>=0;i--)
	if(num>>i&1)
		c++;
return c;
}
