// in this programe we use arithmatic operater for swaping of two numbers;;;;;;;

#include<stdio.h>
int main()
{
int a,b;
//take value from the user
printf("Enter the value of a and b \n");
scanf("%d %d",&a,&b);
printf("The Enterd value is \n a=%d,b=%d \n",a,b);

//swap by + and - operater
printf("swap using + and - operater \n");

a=a+b;
b=a-b;
a=a-b;

printf("after swape by + and - value is \n a=%d,b=%d \n",a,b);

// swap by * and / operater
printf("swap using * and / operater \n");

a=a*b;
b=a/b;
a=a/b;

printf("after swap by * and / value is\n a=%d ,b=%d \n",a,b);

//swap using + and - operater only by one Expretion

printf("swap the value using + and - only by one Expretion \n");

b=a+b-(a=b);

printf("after swap by + and - ony by one expretion \n a=%d,b=%d \n",a,b);

// swap using * and / operater only by one expretion
printf("swap the value using * and / operater only by one expretion \n");

b=a*b/(a=b);

printf("after swap by using * and / only by one expretion \n a=%d,b=%d \n",a,b);

return 0;
}
