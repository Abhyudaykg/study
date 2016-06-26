#include<stdio.h>
int main()
{
int arr[]={10,20,36,72,87,20};
int *k,*j;
j=&arr[4];
k=(arr+4);
if(j==k)
	printf("same\n");
else
	printf("not same\n");
return 0;
}
