#include<stdio.h>
unsigned long int fact(int f);
int main()
{
int ft;
unsigned long int o;
printf("value=");
scanf("%d",&ft);
o=fact(ft);
printf("factorial=%lu \n",o);
return 0;
}
unsigned long int fact(int f)
{
int y;
y=f;
if(f==1)
{
return 1;
}

f=y*fact(--f);
return f;
}
