/*	2) Write a C program to input 10 numbers through the keyboard into an array and find the 
  	   biggest and smallest number in an Unsorted array without using any Sorting Technique.
*/

#include<stdio.h>
int main()
{
int a[10];
int i;
printf("Enter the element\n");
for(i=0;i<10;i++)
	scanf("%d",&a[i]);

int s=0,b=0,j;

for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
	{
	if(a[j]>s)
		s=a[j];
	if(a[j]<b)
		b=a[j];
	}
}

printf("smallest=%d\tbiggest=%d\n",b,s);
return 0;
}
