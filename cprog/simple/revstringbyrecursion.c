/* revers the string by recurson */

#include<stdio.h>
#include<string.h>
int rev(char *c);
int main(void)
{
char str[]="Abhyuday";
int l=strlen(str);
int l2;
puts(str);
printf("%d \n",l);
l2=rev(str);
printf("%c \n",*str);
printf("%d \n",l2);
return 0;
}
int rev(char *c)
{
static int l2;
if((*c)=='\0')
	return;
c++;
rev(c);

l2++;
printf("%c",*c);

return l2;

}
