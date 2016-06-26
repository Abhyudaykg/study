/* in this programe i multiplay to matrix*/

#include<stdio.h>

int main()
{
int m1[2][2]={1,2,3,4};
int m2[2][2]={5,6,7,8};
int row,col,i,j;
int m[2][2];
int mr,mc;
int count=0;
for(mr=0;mr<2;mr++)
{
for(mc=0;mc<2;mc++)
{
i=0;
j=0;
m[mr][mc]=((m1[mr][i])*(m2[j][mc]))+((m1[mr][++i])*(m2[++j][mc]));
count++;
printf("count=%d",count);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("m(%d)(%d)=%d \t",i,j,m[i][j]);
}
printf("\n");
}
return 0;
}
