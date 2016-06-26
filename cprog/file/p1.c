//     1)	 Program to Convert Lower to Upper and Upper to Lower Cases of a given file.

#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
unsigned int l;
	if(argc!=2)
	{
		printf("ussage: ./a.out Filename\n");
		return;
	}
FILE *fp;
char ch;
fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File does not exist...\n");
		return;
	}
for(l=0;fgetc(fp)!=EOF;l++);
rewind(fp);
char *p;
int i=0;
p=malloc(sizeof(char)*l);
while((ch=fgetc(fp))!=EOF)
{
	if(ch<='z' && ch>='a')
	{
	ch=ch&~(1<<5);
		p[i++]=ch;
	}
	else if(ch<='Z' && ch>='A')
	{
	ch=ch|1<<5;
		p[i++]=ch;
	}
	else
		p[i++]=ch;
}
p[i]='\0';
i=0;
rewind(fp);
while((putc(p[i++],fp))!='\0');
}
