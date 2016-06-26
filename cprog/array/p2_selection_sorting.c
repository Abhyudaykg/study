#include<stdio.h>
int main()
{
int a[]={90,80,60,70,10,20,40,30,50,100};
int ele;
int i,j;

ele=sizeof(a)/sizeof(a[0]);

printf("befor\n");
for(i=0;i<ele;i++)
	printf("%d\t",a[i]);
printf("\n");

for(i=0;i<ele-1;i++)
	for(j=i+1;j<ele-1;j++)
		if(a[i]>a[j])
		{
		a[i]=a[i]^a[j];
		a[j]=a[i]^a[j];
		a[i]=a[i]^a[j];
		}

printf("After\n");
for(i=0;i<ele;i++)
	printf("%d\t",a[i]);
printf("\n");

return 0;
}
