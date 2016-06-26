#include<stdio.h>
int main()
{
int a[5]={5,1,15,20,25};
int i,j,k=1,m;
i=++a[1];
printf("%d\n",i);
j=a[1]++;
printf("%d\n",i);
m=a[i++];
printf("%d\n",i);
printf("\n%d %d %d\n",i,j,m);

return 0;
}
