//	2)	 Write a Program to remove a Specific line from the given text file.

#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
FILE *fp;
char ch;
int ln;
unsigned int c=1;
unsigned int s;
char *p;
int i=0;
	if(argc!=3)
	{
		printf("ussage: ./a.out Filename line.no...\n");
		return;
	}
fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File does not exist...\n");
		return;
	}
for(s=0;(ch=fgetc(fp))!=EOF;s++);
rewind(fp);
p=malloc(sizeof(char)*s);
ln=atoi(argv[2]);

while((ch=fgetc(fp))!=EOF)
{	if(ch=='\n')
		c++;
	if(c!=ln)
	{
		p[i++]=ch;
	}
}
p[i]='\0';
fp=fopen(argv[1],"w");
fprintf(fp,"%s",p);
}

