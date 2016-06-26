/*	9) 	Write a C program to find the duplicate elements of a given array and find the count of
	     	duplicated elements.
		     Ex: if  int a[] = {0,3,1,0,5,1,2,0,4,5}
		     output : -
		     The duplicate elements are  existed in an array 
		       0  -- 3 times
		       1  -- 2 times
		       5  -- 2 times 
*/

#include<stdio.h>
int main()
{
int a[]={0,1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,7,8,9,6,7,8,9,6,7,8,9,6,7,8,9,6,7,8,9,0,9,8,7,6};
int ele;
int i,j;
int c;
ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
{
	for(j=0;j<i;j++)
	if(a[i]==a[j])
		break;
	if(i==j)
	{
	c=0;
		for(j=i+1;j<ele;j++)
		{
		if(a[i]==a[j])	
			c++;		
		}
	if(c)
	printf("%d repeat %d time \n",a[i],c+1);
	}
}

return 0;
}
