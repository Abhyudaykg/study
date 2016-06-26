#include<stdio.h>
char *sr(char [],char);
int main()
{
int i;
char s[30];
char *r;
char ch;

printf("Enter the string\n");
gets(s);
puts(s);
printf("Enter the character you want to search\n");
scanf("%c",&ch);

r=sr(s,ch);
printf("\n");
printf("address of %c in %s is %p\n",ch,s,r);

return 0;
}
char *sr(char p[],char ch)
{
char *q=0;
int i;
for(i=0;p[i];i++)
	if(p[i]==ch)
		q=p+i;

return q;
}
