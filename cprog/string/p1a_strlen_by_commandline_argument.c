/*	1)	 Write a program to find  string length using pointer.
*/
//input like ./a.out "abhyuday godhasara" "kantilal"....
#include<stdio.h>
int main(int argc,char **argv)
{
int i;
int j;

for(j=1;j<argc;j++)
{
	for(i=0;argv[j][i];i++);
	printf("length of string \" %s\"=%d \n",argv[j],i);
}

return 0;
}
