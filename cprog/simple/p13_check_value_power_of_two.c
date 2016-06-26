#include<stdio.h>
int main()
{
int num;
printf("Enter the value for which you want two check it is power of two or not \n num=");
scanf("%d",&num);
(num&num-1)?(printf("num is not power of two \n")):(printf("num is power of two \n"));

return 0;
}
