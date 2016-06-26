#include<stdio.h>
int main()
{

int a,b,c;
a=4;
b=7;
c=9;
a<b&&a<c?printf("a is minimum \n"):(b<c?printf("b is minimum \n"):printf("c is minimum \n"));
a>b&&a>c?printf("a is maximum"):(b>c?printf("b is maximum"):printf("c is maximum"));


return 0;

}
