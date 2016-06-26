#include<stdio.h>
void my_strcpy(const char *,char *);
int main()
{
char s[20];
char d[20];

printf("Enter the string\n");
gets(s);
puts(s);
puts(d);
printf("\n");
my_strcpy(s,d);
puts(d);
return 0;
}

void my_strcpy(const char *s,char *d)
{
for(;*s;s++,d++)
	*d=*s;
*d='\0';
}
