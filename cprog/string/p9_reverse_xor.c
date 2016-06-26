#include<stdio.h>
int main()
{
char str[50];
int i,j;

printf("Enter the string\n");
gets(str);
puts(str);

for(i=0;str[i];i++);

for(i=i-1,j=0;j<i;j++,i--)
{
str[i]=str[i]^str[j];
str[j]=str[i]^str[j];
str[i]=str[i]^str[j];
}

printf("After\n");
puts(str);
return 0;
}
