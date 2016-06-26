/*	11) 	Write a program to copy the elements of one array into another array without duplicate
       		items as a first slot, and store duplicate elements as a second slot.
  
		     Ex:   source array           {10,2,4,5,2,1,3,4,6,5,8,9,2}
	             destination arrays  {10,2,4,5,1,3,6,8,9} ,   { 2,2,4,5} 
                                         first slot               second slot
		     Take two different arrays for first and second slots. 
*/

#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
unsigned int ele;
int i,j,k=1,l=1;

ele=sizeof(a)/sizeof(a[0]);

int s1[ele+1],s2[ele+1];
s1[0]=0;
s2[0]=0;
for(i=0;i<ele;i++)
	printf("%d\t",a[i]);
printf("\n");
for(i=0;i<ele;i++)
{
	for(j=0;j<i;j++)
	{
		if(a[i]==a[j])
		break;
	}
if(i==j)
{
	s1[0]++;
	s1[k]=a[i];
	k++;
}
else
{
	s2[0]++;
	s2[l]=a[i];
	l++;
}
}
for(i=1;i<=s1[0];i++)
	printf("%d\t",s1[i]);
printf("\n");
for(i=1;i<=s2[0];i++)
	printf("%d\t",s2[i]);
printf("\n");
return 0;
}
