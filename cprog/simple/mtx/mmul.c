//multiplay user preferance matrix//
#include<stdio.h>
struct matrix
{
int m[100][100];
};
int main()
{

int n,row,col;
printf("how many matrix you want to eneter \n");
scanf("%d",&n);
printf("enter the order of matrix \n");
scanf("%d %d",&row,&col);
struct matrix mtx[n];
int N;
int i,j,k;

for(N=0;N<n;N++)
{
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("enter the value of mtx[%d].m[%d][%d]= \n",N,i,j);
scanf("%d",&mtx[N].m[i][j]);
}
}
}
for(N=0;N<n;N++)
{
printf("matrix=%d",N);
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("mtx[%d].m[%d][%d]=%d \t",N,i,j,mtx[N].m[i][j]);
}
printf("\n");
}
}

}
