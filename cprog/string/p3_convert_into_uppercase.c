#include<stdio.h>
int main()
{
int i,j;
char s[10];
printf("Enter the string=\n");
gets(s);

puts(s);
for(i=0;s[i];i++)
	s[i]=s[i]&~(1<<5);

puts(s);

}
