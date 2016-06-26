#include<stdio.h>
char *cat(const char *,char *);
int main()
{
char s[30];
char d[30];
char *p;
printf("Enter the string\n ");
gets(s);
printf("Enter the string\n ");
gets(d);

puts(s);
puts(d);

printf("\n");
p=cat(s,d);
puts(p);
return 0;
}
char *cat(const char *s,char *d)
{
int i,j;

for(i=0;d[i];i++);
for(j=0;s[j];i++,j++)
	d[i]=s[j];
d[i]='\0';

return d;
}
