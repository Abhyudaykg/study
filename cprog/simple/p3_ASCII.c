
#include<stdio.h>
int main ()
{
char ch;
int a;
int i;

printf("Enter \n 1=for character to ASCII, \n 2=for ASCII to character \n");
scanf("%d",&i);

switch(i)
{
case 1:

printf("Enter the the character for which you want to find the ASCII value..\n");
scanf(" %c",&ch);   // here we use scanf function 'second_time' so we 'need to enter 'space' befor %c in syntacs'{scanf("space%c",&ch);}'
printf("ASCII of %c=%d \n",ch,ch);
break;

case 2:

printf("Enter the the ASCII for which you want to find the character value..\n");
scanf("%d",&a);
printf("ASCII of %d=%c \n",a,a);
break;
}
return 0;
}
