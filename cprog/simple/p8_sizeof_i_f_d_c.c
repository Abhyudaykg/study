#include<stdio.h>
int main()
{
int i=34;
printf("int=%d i=%d 34=%d \n",sizeof(int),sizeof(i),sizeof(34));
char ch='a';
printf("char=%d ch=%d 'a'=%d \n",sizeof(char),sizeof(ch),sizeof('a')); //here we get 1 1 4 because 'a' store in ch as ASCII and the ASCII of 'a' is 97																	   and it is integer;
float f=34.7;
printf("float=%d f=%d 34.7=%d \n",sizeof(float),sizeof(f),sizeof(34.7)); // here we get 4 4 8 because only 34.7 take as a double,if we store it as float than wright 34.7f;
float ff=35.2f;
printf("float=%d ff=%d 35.2f=%d \n",sizeof(float),sizeof(ff),sizeof(35.2f));
double d=34.7;
printf("double=%d d=%d 34.7=%d \n",sizeof(double),sizeof(d),sizeof(34.7));

return 0;
}
