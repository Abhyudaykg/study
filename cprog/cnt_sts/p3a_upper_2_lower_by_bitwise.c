#include<stdio.h>
int main ()
{
char ch;

printf("Enter the char= \n");
scanf("%c",&ch);

if(ch>='a'&&ch<='z')
	printf("%c \n",ch);
else
	if(ch>='A'&&ch<='Z')
		printf("%c \n",ch|32);			// set the 5th bit (0010 0000);
	else
		printf("you entered non alphabate...... \n");

return 0;
}
