/*	8) Write a C program which deletes the duplicate elements of an array.
*/

#include<stdio.h>
int main()
{
char a[]={'A','C','B','D','A','i','u','B','E','D','B','C'};
int ele;
int i;
int pos;
int j,k;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
{
	for(j=i+1;j<ele;j++)
	{
		if(a[i]==a[j])
		{
		pos=j;
		for(k=0;k<ele;k++)
		{
		if(k>=pos)
			a[k]=a[k+1];		
		}
		ele=ele-1;

		}	

	}
}
for(i=0;i<ele;i++)
	printf("%c\t",a[i]);
printf("\n");
return 0;
}
