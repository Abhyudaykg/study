//comma operator copy right most operand value at left side of '=' operator

#include<stdio.h>
int main()
{
int i=10;
int j=20;
int k=30;
int l;

printf("i=%d\tj=%d\tk=%d\n\tl=%d \n",i,j,k,l);

//l=(i,j,k);
//l=10*(i=500,j=90);
//l=((i=500),(i=600),700);				// left --> right
//l=(i=500),(i=600),700;				// '='assignment operator have higher priority than ','comma operator
//(0,1)?printf("one \n"):printf("zero \n");


printf("i=%d\tj=%d\tk=%d\n\tl=%d \n",i,j,k,l);
return 0;
}
