#include<stdio.h>
int main ()
{
int i,j,k,n,m;
printf("Enter the order of the matrix row=N & collumn=M");
scanf("%d,%d",&n,&m);
printf("order of your matrix is %dx%d",n,m);
int m1(n)(m);
int m2(n)(m);
int mo(n)(m);
printf("enter the element of your matrix");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("m1(%d,%d)=",i,j);
scanf("%d",m1(i)(j));
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("m2(%d,%d)=",i,j);
scanf("%d",m2(i)(j));
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
mo(i)(j)=m1(i)(j)+m2(i)(j);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("mo(%d)(%d)=%d",i,j,mo(i)(j));
}
}
return 0;
}
