#include<stdio.h>
void my_strprint(const char *);
int main()
{
char str[40];

printf("Enter the string\n");
gets(str);

my_strprint(str);
printf("\n");
return 0;
} 
void my_strprint(const char *s)
{
if(*s)
{
	printf("%c",*s);
//	my_strprint(s++);		//go infinite.....
	
//	my_strprint(s+1);		// correct
	my_strprint(++s);		// correct

}
}
