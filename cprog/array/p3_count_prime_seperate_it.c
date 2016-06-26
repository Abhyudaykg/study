/*	3) Write a C program to input 10 numbers through the keyboard and find the number
  	   of prime numbers count, store  them into a seperate array and display it.
*/

#include<stdio.h>
int main()
{
int a[10];
int i,j,k;
int prime[10];
printf("Enter the element\n");
for(i=0;i<10;i++)
	scanf("%d",&a[i]);
int c=0;
for(i=0;i<10;i++)
{
if(a[i]==1)
	goto abc;
for(j=2;j<a[i];j++)
{
	if(a[i]%j==0)
		break;
}
if(j==a[i])
{
abc:
     	prime[c]=a[i];
	c++;
}
}
printf("%d prime number out of 10\n",c);
for(i=0;i<c;i++)
	printf("%d\t",prime[i]);
printf("\n");
return 0;

}
