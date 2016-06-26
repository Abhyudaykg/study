// in this programe we swape the two number by using temp variable

#include<stdio.h>
int main()
{

int a,b;
scanf("%d %d",&a,&b);
printf("the enterd value of a=%d ,b=%d \n ",a,b);
int temp;

temp=a;
a=b;
b=temp;
printf("swap value a=%d ,b=%d \n",a,b);


return 0;
}
