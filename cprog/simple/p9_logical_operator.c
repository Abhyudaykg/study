#include<stdio.h>
int main()
{
int i,j,k,l,m,n,o,p,q,r,s,t;

i=0;
j=1;
k=2;
l=3;
m=4;
n=5;
o=6;
p=7;

t=i&&j*(!k)/p*(!l)&&m||n||o;

printf("i=%d, j=%d \n k=%d \n",i,j,t);

return 0;
}
