#include<stdio.h>
int main()
{
char str[10];
char ch,ch1;
printf(">Enter the string \n");
gets(str);
puts(str);

printf(">Enter the character which is you want to replace\n");
scanf("%c",&ch);
printf(">Enter the character wich is you want to put....\n");
scanf(" %c",&ch1);

printf("%c> put insted of %c\n ",ch1,ch);

int i;
for(i=0;str[i];i++)
{
if(str[i]==ch)
	str[i]=ch1;
}

printf(">After\n");
puts(str);


return 0;
}
