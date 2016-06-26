#include<stdio.h>

int  convert(int,int);
int main()
{
int num;
int base;

printf("Enter the decimal number=");
scanf("%d",&num);
printf("num=%d",num);

printf("Enter the option in which you want to convert \n1>binary\n2>hexadecimal\n3>octal\n");
scanf("%d",&base);
printf("base=%d \n",base);
switch(base)
{
case 1:
	convert(num,2);
	break;
case 2:
	convert(num,16);
	break;
case 3:
	convert(num,8);
	break;
default:
	printf("invalid option\n");
}
return 0;
}
int convert(int num,int base)
{
int n=num;
int b=base;
int i;
for(i=0;n>0;n=n/b,i++);
int array[i];
n=num;
int j;
for(j=i;i>=0;i--)
{
array[i]=n%b;
n=n/b;
}
for(i=0;i<=j;i++)
	printf("%d",array[i]);
printf("\n");
}

