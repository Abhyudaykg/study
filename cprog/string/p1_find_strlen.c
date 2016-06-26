/*	1)	 Write a program to find  string length using pointer.

*/
#include<stdio.h>
#include<string.h>
int main()
{
char *s="abhyuday";
int i=0;

printf("%d\n",(int)strlen(s));
for(i=0;s[i];i++);
printf("string length=%d\n",i);

return 0;
}
