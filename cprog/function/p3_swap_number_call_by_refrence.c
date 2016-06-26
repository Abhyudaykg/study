#include<stdio.h>
void swap(int *,int *);
int main()
{
int n1,n2;

printf("Enter the two numbers=\n");
scanf("%d %d",&n1,&n2);
printf("n1=%d\tn2=%d \n",n1,n2);
swap(&n1,&n2);

printf("n1=%d\tn2=%d \n",n1,n2);
return 0;
}
void swap(int *p,int *q)
{
*p=*p^*q;
*q=*p^*q;
*p=*p^*q;
}
