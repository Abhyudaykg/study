/*	4)  Write a C program to findout second largest and second smallest elements of an
	      unsorted array without using any Sorting Technique.
*/

#include<stdio.h>
int main()
{
int s[2];
int l[2];
int a[20];
int ele;
int i;

ele=sizeof(a)/sizeof(a[0]);

printf("Enter the element of array\n");

for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

for(i=0;i<ele;i++)
	printf("%d\t",a[i]);

printf("\n");
s[0]=a[0];
l[0]=a[0];
for(i=0;i<ele;i++)
{
if(a[i]<s[0])
{
	s[1]=s[0];
	s[0]=a[i];
}
if(a[i]<s[1]&&a[i]>s[1])
	s[1]=a[i];

if(a[i]>l[0])
{
	l[1]=l[0];
	l[0]=a[i];
}
if(a[i]>l[1]&&a[i]<l[0])
	l[1]=a[i];
}
printf("the 1st=%d 2nd=%d  smallest element \nThe 1st=%d 2nd=%d largest element \n",s[0],s[1],l[0],l[1]);

return 0;
}

