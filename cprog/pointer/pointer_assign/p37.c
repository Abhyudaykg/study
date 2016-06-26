#include<stdio.h>

#define dt long

int main()
{
dt a[3];
void *p1=&a[0];
void *p2=&a[1];
int n;

n=p2-p1;


printf(" dt=%d\n",sizeof(dt));
printf("sizeof integer = %d\n",n);
return 0;
}
