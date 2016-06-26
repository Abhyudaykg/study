// find that the in file the maximum size of line...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char ** argv)
{
FILE *fp;
int cl=0,cm=0;
int l=0;
char ch=0;
	if(argc!=2)
	{
		printf("ussage: ./a.out filename\n");
		return;
	}
fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("File does not exist\n");
		return;
	}

while(ch!=EOF)
{
	while((ch=fgetc(fp))!='\n'&&ch!=EOF)
		cl++;
	if(cl>cm)
		cm=cl;
cl=0;
}
printf("maximum number of character in one line=%d\n",cm);
}
