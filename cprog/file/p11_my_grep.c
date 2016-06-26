// design your own grep command which find string in file and on which line string is present it print the whole line.....
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp;
int s;
char ch;
int c=1;

	if(argc!=3)
	{
		printf("ussage: ./a.out filename string\n");
		return;
	}
fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("File does not exist\n");
		return;
	}
while((ch=fgetc(fp))!=EOF)
	s++;

char *p=malloc(s+1);

rewind(fp);

while(fgets(p,s,fp))
{
	if(strstr(p,argv[2]))
		printf("%d : %s \n",c,p);
c++;
}
}
