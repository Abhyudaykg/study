#include<stdio.h>
int main()
{
int n[2][2]={{1,2},{4,5}};
int i,j;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	printf("%d",*(*(n+i)+j));

return 0;
}
