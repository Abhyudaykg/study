#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
FILE *fp;
unsigned int c=1;
char ch;
	if(argc!=3)
	{
		printf("ussage: ./a.out Filename line.no..\n");
		return;
	}
fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File does not exist...\n");
		return;
	}
unsigned int sf;
	for(sf=0;fgetc(fp)!=EOF;sf++);
rewind(fp);
while((ch=fgetc(fp))!=EOF)
{
if(ch=='\n')
	c++;
}
rewind(fp);
char **p;

p=malloc(sf*c);
char *r;
int i=0;
while(fgets(r,fp))
{
if(i==ln)
{
	printf("Enter the new string \n");
	fgets(r);
	strcpy(p[i++][sf],r);
}
else
{
strcpy(p[i++][sf],r);

}
}
}
