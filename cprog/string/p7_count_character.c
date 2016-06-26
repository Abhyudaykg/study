#include<stdio.h>
int main()
{
char str[50];
char ch;
int i;

printf("Enter the string\n");
gets(str);
puts(str);

printf("Enter the character you want to count\n");
scanf("%c",&ch);
printf("ch=%c \n",ch);

int c=0;
for(i=0;str[i];i++)
{
if(str[i]==ch)
	c++;
}

printf("%c come %d time in string\n",ch,c);


return 0;
}

