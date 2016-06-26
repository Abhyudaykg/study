#include<stdio.h>
main()
{
enum days{mon=-1,TUE=0xa,WED=3+2,THU,FRI,SAT};
printf("%d %d %d %d %d %d \n",mon,TUE,WED,THU,FRI,SAT);
}
