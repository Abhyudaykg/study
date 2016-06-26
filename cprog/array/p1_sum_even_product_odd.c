/*	 1) Write a C program to input 10 numbers through the keyboard into an array and
     	    display the results of addition of even numbers and product of odd numbers.
*/
#include<stdio.h>
int main()
{
int a[10];
int i;

printf("Enter the 10 element of array\n");
for(i=0;i<10;i++)
	scanf("%d",&a[i]);

int sum=0,prod=1;
for(i=0;i<10;i++)
{
if(a[i]%2)
	prod=prod*a[i];
else
	sum=sum+a[i];
}

printf("even sum=%d\todd prod=%d\n",sum,prod);


return 0;
}
