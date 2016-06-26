#include<stdio.h>
int main ()
{
char ch;

printf("Enter the char= \n");
scanf("%c",&ch);

if(ch>='A'&&ch<='Z')
	printf("%c \n",ch);
else
	if(ch>='a'&&ch<='z')
		printf("%c \n",ch&~32);   			// lower to upper by using bitwise;clear the 5th bit (0010 0000)
	else
		printf("you entered non alphabate...... \n");

return 0;
}
