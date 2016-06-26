/*	10) 	Write a program to print the non repeted numbers of  a given array.
        		
			Ex : if   int a[] = {0,3,1,0,5,1,2,0,4,5}
                	Output :  3, 2, 4
*/
#include<stdio.h>
int main()
{
int a[]={1,1,3,5,7,9,2,3,4,5,6,7,8,9,0};
int i,j;
int ele;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
{
	for(j=0;j<ele;j++)
	{
		if(i!=j)	
			if(a[i]==a[j])	
			break;
	}
	if(j==ele)
	printf("%d \t",a[i]);
}
printf("\n");
return 0;
}
