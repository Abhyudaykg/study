#include<stdio.h>
int main()
{
int a[]={4,5,3,8};
int i;
int ele;
int j;
int *temp;
ele=sizeof(a)/sizeof(a[0]);
int *p[ele];
for(i=0;i<ele;i++)
{
	printf("%d\t",a[i]);
	p[i]=&a[i];
	printf("%p\t",p[i]);
}
printf("\n");

printf("\n");
printf("\n");

for(i=0;i<ele;i++)
{
	for(j=0;j<ele-1;j++)
	{
	if(*p[j]>*p[j+1])
	{
	temp=p[j];
	p[j]=p[j+1];
	p[j+1]=temp;
	}	
	}
}
for(i=0;i<ele;i++)
	printf("%d\t",*p[i]);

printf("\n");
for(i=0;i<ele;i++)
	printf("%d\t",a[i]);
printf("\n");


return 0;
}
