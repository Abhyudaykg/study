#include<stdio.h>
int main()
{
char s[20];
int pos;
char ch;
printf("Enter the string\n");
gets(s);

puts(s);

printf("Enter the character ch you want to add at position ");
scanf("%c %d",&ch,&pos);
printf("%c %d \n",ch,pos);
int i,l;
for(l=0;s[l];l++);

for(i=l+1;i>=pos-1;i--)
{
if(i>pos-1)
	s[i+1]=s[i];
else
{	s[i+1]=s[i];
	s[i]=ch;
}
}
puts(s);
return 0;
}
