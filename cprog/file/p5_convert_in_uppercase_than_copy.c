#include<stdio.h>
main(int argc,char **argv)
{
FILE *sp,*dp;
char ch;

	if(argc!=3)
	{
		printf("ussage: ./a.out source destination \n");
		return;
	}
sp=fopen(argv[1],"r");

	if(sp==0)
	{
		printf("file is not exist\n");
		return;
	}
dp=fopen(argv[2],"w");

while((ch=fgetc(sp))!=EOF)
{
	if(ch>='a'&&ch<='z')
	{
	ch=ch&~(1<<5);
	}

fputc(ch,dp);
}
printf("\n");
}
