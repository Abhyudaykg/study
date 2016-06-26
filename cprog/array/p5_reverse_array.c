/* 	5) Write a C program to reverse  the elements of a given array.
*/




#include<stdio.h>
int main()
{
int i;
int j;
int ele;
int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
	printf("%d\t",a[i]);

printf("\n");

for(i=0,j=ele-1;i<j;i++,j--)
{
a[i]=a[i]^a[j];
a[j]=a[i]^a[j];
a[i]=a[i]^a[j];
}

printf("\n");
printf("\n");
for(i=0;i<ele;i++)
	printf("%d\t",a[i]);

printf("\n");
return 0;
}
