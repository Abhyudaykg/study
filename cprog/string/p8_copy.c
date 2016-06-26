#include<stdio.h>
int main()
{
char sstr[50];
char dstr[50];
int i;

printf("Enter the string\n");
gets(sstr);
puts(sstr);

for(i=0;sstr[i];i++)
	dstr[i]=sstr[i];
dstr[i]='\0';

printf("\ndstr=%s\n",dstr);

return 0;
}
