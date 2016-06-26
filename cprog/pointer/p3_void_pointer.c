#include<stdio.h>
int main()
{
int i=10;
char ch='a';
float f=23.5f;

void *p;

p=&i;
	printf("%d\n",*(int *)p);
p=&ch;
	printf("%c\n",*(char *)p);
p=&f;
	printf("%f\n",*(float *)p);

return 0;
}
