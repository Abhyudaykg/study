#include<stdio.h>
void print_binary(int);

int main()
{
int num;

printf("Enter the number\n");
scanf("%d",&num);
printf("num=%d\n",num);
print_binary(num);

return 0;
}
void print_binary(int num)
{
int i;

for(i=31;i>=0;i--)
	printf("%d",num>>i&1);
printf("\n");
}
