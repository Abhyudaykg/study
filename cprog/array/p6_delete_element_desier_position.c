/*	6) Write a C program to delete an element at desired position from an array.
*/


#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,0};
int ele;
int pos;
int i;

ele=sizeof(a)/sizeof(a[0]);

printf("Enter the position of you want to delete\n");
scanf("%d",&pos);

for(i=0;i<ele;i++)
	printf("%d \t",a[i]);

printf("\n");
for(i=0;i<ele-1;i++)
{
	if(i>=pos-1)
		a[i]=a[i+1];
}
for(i=0;i<ele-1;i++)
	printf("%d \t",a[i]);

printf("\n");
return 0;
}
