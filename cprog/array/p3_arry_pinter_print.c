#include<stdio.h>
int main()
{
int a[10];
int *p;
int i;

printf("Enter the 10 element of array\n");
p=a;
for(i=0;i<10;i++)
	scanf("%d",p++);

p=a;
for(i=0;i<10;i++)
	printf("%d\t",*p++);
printf("\n");

return 0;
}
