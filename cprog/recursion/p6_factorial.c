#include<stdio.h>
int fact(int);
int main()
{
int num;
int ans=0;
printf("Enter the integer for witch you want to find factorial=");
scanf("%d",&num);

printf("\n num=%d\n",num);

ans=fact(num);

printf("Factorial of %d is %d\n",num,ans);

return 0;
}
int fact(int n)
{
int pro=1;

if(n)
	pro=n*fact(n-1);

	return pro;



}
