#include<stdio.h>
int my_strstr(const char *,const char *);
int main()
{
char m[20];
char s[20];
char p;

printf("Enter main string\n");
gets(m);
printf("Enter sub string\n");
gets(s);
printf("\n");
puts(m);
puts(s);
printf("starting address of string is %p\n",m);
p=my_strstr(m,s);
if(p==0)
	printf("string not present\n");
else
	printf("string presente at %d\n",p);

return 0;
}
int my_strstr(const char *m,const char *s)
{
int i,j;
unsigned int c=0;
for(i=0;m[i];i++)
{

if(m[i]==s[0])
{

	for(j=1;s[j];j++)
		if(s[j]!=m[i+j])
			break;
	
	if(s[j]=='\0')
		c++;
}
}
return c;
}
