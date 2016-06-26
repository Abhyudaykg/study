#include<stdio.h>
int len(const char *);

int main()
{
char s[]="abhyuday";
int c;

c=len(s);

printf("%d \n",c);

return 0;
}

int len(const char *p)
{
int i;

for(i=0;p[i];i++);

return i;
}
