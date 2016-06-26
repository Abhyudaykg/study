#include<stdio.h>
main(int argc,char **argv)
{
FILE *sp;
FILE *dp;
char ch;

	if(argc!=3)				// check that the user gave correct input or not at loadtime......
	{
		printf("ussage: ./a.out source destination\n");
		return;
	}
sp=fopen(argv[1],"r");				// open source file in read mode.....
//dp=fopen(argv[2],"w");				// if source file is not present than also destination file is created..

	if(sp==0)				// check that the source file is exist or not......
	{
		printf("source file does not exist\n");
		return;
	}
dp=fopen(argv[2],"w");				// open destination file in wright mode.......
						
while((ch=fgetc(sp))!=EOF)			// copy yhe content of source file into destinstion file.....
	fputc(ch,dp);
}
