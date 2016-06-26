#include<stdio.h>
int main()
{
int i,j;
char s[10],s1[10];

printf("Enter the string 1st\n");
gets(s);
printf("Enter the second string \n");
gets(s1);

puts(s);
puts(s1);

for(i=0;s[i];i++)
{
	if(s[i]!=s1[i])
	break;
}
if(s[i]==s1[i])
	printf("Equal..\n");
else
	printf("not \n");

return 0;
}
