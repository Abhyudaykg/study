#include<stdio.h>
int main()
{
char s[]="Hello";
int i=0;
while(s[i]!='\0')
{
printf("\n%c%c",s[i],*(i+s));
i++;
}

return 0;
}
