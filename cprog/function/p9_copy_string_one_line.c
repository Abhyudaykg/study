#include<stdio.h>
void my_sp(const char *,char *);
int main()
{
char s[20];
char d[20];

printf("Enter the string\n");
gets(s);
puts(s);
my_sp(s,d);

puts(d);
return 0;
}
void my_sp(const char *s,char *d)
{
while(*d++=*s++);
}

