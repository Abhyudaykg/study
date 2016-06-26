#include<stdio.h>
char *sr(char [],char);
int main()
{
	char s[20];
	char ch;
	char *p;

	printf("Enter the string\n");
	gets(s);

	printf("Enter the character\n");
	scanf("%c",&ch);

	p=sr(s,ch);

	if(p==0)
		printf("character not found\n");
	else
		printf("location=%p \n",p);

	printf("starting at %p\n",s);
	return 0;
}
char *sr(char s[], char ch)
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
			return (s+i);
	}
	return 0;
}

