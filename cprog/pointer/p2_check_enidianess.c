#include<stdio.h>
int main()
{
int i=1;
char *p;

p=(char *)&i;

if(*p==1)
	printf("Little \n");
else
	printf("BIG \n");

return 0;

}
