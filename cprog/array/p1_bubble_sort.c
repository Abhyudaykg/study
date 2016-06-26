#include<stdio.h>
int main()
{
int a[]={10,20,40,30,50,60,90,70,80,100};
int ele,j,i;

ele=sizeof(a)/sizeof(a[0]);

printf("before\n");
for(i=0;i<ele;i++)
	printf("%d\t",a[i]);
printf("\n");

for(i=0;i<ele-1;i++)
	for(j=0;j<ele-1;j++)
		if(a[j]>a[j+1])
	{
		a[j]=a[j]^a[j+1];
		a[j+1]=a[j]^a[j+1];
		a[j]=a[j]^a[j+1];
	}

printf("after \n");
for(i=0;i<ele;i++)
	printf("%d\t",a[i]);
printf("\n");
	

return 0;
}
