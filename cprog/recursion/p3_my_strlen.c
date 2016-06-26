#include<stdio.h>
int my_strlen(const char *);
int main()
{
int c=0;
char str[40];

printf("Enter the string\n");
gets(str);

c=my_strlen(str);

printf("length=%d\n",c);
return 0;
}
int my_strlen(const char *s)
{
static int c=0;

if(*s)
	c++,my_strlen(s+1);

	return c;




}
