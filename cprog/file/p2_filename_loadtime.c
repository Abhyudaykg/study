#include<stdio.h>
main(int argc,char **argv)
{
if(argc!=2)
{	printf("ussage: ./a.out filename\n");
	return;
}
FILE *fp;

fp=fopen(argv[1],"r");
}

