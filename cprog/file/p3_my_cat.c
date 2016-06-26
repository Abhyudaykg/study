#include<stdio.h>
main(int argc,char **argv)
{
FILE *fp;
char ch;

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

while((ch=fgetc(fp))!=EOF)	
	printf("%c",ch);
printf("\n");
}
