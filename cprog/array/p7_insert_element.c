/*	7) Write a C program to insert an element at desired position in an array. 
*/


#include<stdio.h>
int main()
{
int a[20]={1,2,3,4,5,6,7,8,9,0};
int pos;
int i;
int ele;

ele=sizeof(a)/sizeof(a[0]);

printf("pos=");
scanf("%d",&pos);
printf("\npos=%d\n",pos);

for(i=ele;i>=pos;i--)
{
if(i==pos)
	scanf("%d",&a[i]);
else
	a[i+1]=a[i];
}
for(i=0;i<ele;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
return 0;
}
