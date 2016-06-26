#include<stdio.h>

void cpy(const char *,char *);

int main()
{
char s[40];
char d[40];

printf("Enter the string\n");
gets(s);

cpy(s,d);
puts(d);
printf("\n");

return 0;
}
void cpy(const char *s,char *d)
{
if(*s)
{
	*d=*s;
	cpy(s+1,d+1);	
}
else
	*d=*s;
}

