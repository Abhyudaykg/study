#include<stdio.h>
void ps(const char *);

int main()
{
int i;
char s[]="abhyuday";

ps(s);
printf("\n");
return 0;
}
void ps(const char *p)
{

for(;*p;printf("%c",*p),p++);

}

