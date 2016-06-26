#include<stdio.h>
void my_strreverse(const char *);
int main()
{
char str[40];

printf("Enter the string\n");
gets(str);

my_strreverse(str);
printf("\n");
return 0;
} 
void my_strreverse(const char *s)
{
if(*s)
{
//	my_strreverse(++s);		// correct, first character is not printed.....

	my_strreverse(s+1);		// correct 

	printf("%c",*s);
}
}
