#include<stdio.h>
int count(const int *,int);
int main()
{
int a[]={4,5,6,7,8,9,0,2,3,4,5,6,7,8,5,4,6,7,8,565,8};
int i;
int ele;
int c;

ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
	printf("%d \t",a[i]);
printf("\n");

c=count(a,ele);

printf("%d prime number are present in array.\n",c);

return 0;
}
int count(const int *p,int n)
{
int c=0;
int i;
int j;

for(i=0;i<n;i++)
{
for(j=2;j<p[i];j++)
	if(p[i]%j==0)
		break;
if(j==p[i])
	c++;
}
return c;
}
