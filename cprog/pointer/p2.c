#include<stdio.h>
int main()
{
char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *p,i;
p=str;
for(i=0;i<4;i++)
{
printf("%c",*p++)		///error becase of ;

}

return 0;
}
