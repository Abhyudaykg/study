#include<stdio.h>
char *my_strchr(const char *,char);
int main()
{
char str[40];
char ch;
char *l;

printf("Enter the string\n");
gets(str);
printf("\n");
puts(str);

printf("Enter the character you want to search\n");
scanf("%c",&ch);
printf("\nch=%c\n",ch);

l=my_strchr(str,ch);

printf("string starting address is %p and your character location is %p \n",str,l);

return 0;
}
char *my_strchr(const char *s,char ch)
{
if(*s==ch)
	return s;
else
	return my_strchr(s+1,ch);

}


