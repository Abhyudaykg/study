#include<stdio.h>


int main()
{
int m,n,i,j,row,col;
printf("How many matrix you want to ADD \n");
scanf("%d",&n);
printf("Enter the order of matrix \n");
scanf("%d %d",&row,&col);
int temp[row][col];
int sum[row][col];

for(m=1;m<=n;m++)
{
 printf("Enter the %d matrix \n",m);
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
  printf("enter the temp[%d][%d] element",i,j);
  scanf("%d",&temp[i][j]);
  if(m==1)
    sum[i][j]=0;
  sum[i][j]=(sum[i][j])+(temp[i][j]);
  } 

 }
}
printf("sum of your matrix is \n");
for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
	printf("%d\t",sum[i][j]);
  } 
printf("\n");
 }
return 0;
}

