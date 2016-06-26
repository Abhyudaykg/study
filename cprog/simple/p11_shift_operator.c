#include<stdio.h>
int main()
{
/*
unsigned int i=0,j,k,l;
i=i-1;
j=1;
k=i>>j;
printf("%u %d %d \n",i,j,k);
*/
//.............................................................................................................................................
/*
int i=200,j=3,k;
k=i<<j;
printf("i=%d j=%d k=%d \n",i,j,k);
k=i>>j;
printf("i=%d j=%d k=%d",i,j,k);

i=-150,j=3,k;
k=i<<j;
printf("\ni=%d j=%d k=%d\n",i,j,k);
k=i>>j;
printf("i=%d j=%d k=%d",i,j,k);
*/
//.............................................................................................................................................
/*
	if we shift more than 31 than it will be round off means shift 34 == 34-32=2 = shift 2 times,for shift 32 time we get same result as input i;
*/
int i=1;
int j=34;
int k;
k=i<<j;
printf("%d %d %d \n",i,j,k);

return 0;
}
