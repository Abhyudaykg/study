//in this programme we get '1' for 23.5 and '0'0 for 23.7.  .......WHY ?
//because the memory representation in float and double accourding to IEEE 754 standerd
// accourding this standered float convert into 4byte double.....

#include<stdio.h>
int main ()
{
float f=23.5f;
double d=23.5;

float f1=23.7f;
double d1=23.7;

printf("%d",f==d);
printf("\n %d \n",f1==d1);
return 0;
}
