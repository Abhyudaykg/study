#include<stdio.h>
int main()
{
char s[10],s1[10];
char d[30];
int i,j;
printf("Enter first sting=");
gets(s);
printf("\nEnter second string=");
gets(s1);

puts(s);
printf("\n");
puts(s1);

for(i=0;s[i];i++)
{
d[i]=s[i];
}

for(j=0;s1[j];j++)
{
d[j+i]=s1[j];
}
d[j+i]='\0';

printf("\n \n");

puts(d);
return 0;
}
