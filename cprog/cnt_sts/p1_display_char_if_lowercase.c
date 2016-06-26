#include<stdio.h>
int main()
{
char ch;

printf("Enter the char=");
scanf("%c",&ch);

if(ch>=97&&ch<='z')
	printf("%c \n",ch);
return 0;
}
