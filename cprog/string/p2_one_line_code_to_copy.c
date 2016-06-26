/*	2)	 Write a one line code to copy the string into another buffer.
*/
#include<stdio.h>
int main()
{
char s[]="abhyuday godhasara";
char d[50];
int i=0,j=0;

while(d[i++]=s[j++]);
puts(d);
return 0;
}
