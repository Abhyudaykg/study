#include<stdio.h>
int main()
{
char ch;

printf("char=");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
	printf("upper case \n");
else
	if(ch>='a'&&ch<='z')
		printf("lower case \n");
	else
		printf("non alphabatic entry.....\n");


return 0;
}
