// take input from user at load time and replace charactor in file by other charactor ....
#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp;
char ch;
int l=0;
int i=0;

	if(argc!=4)
	{
		printf("ussage: ./a.out filename replacedchar replacebychar\n");
		return;
	}
fp=fopen(argv[1],"r+");

	if(fp==0)
	{
		printf("File does not exist\n");
		return;
	}

while((ch=fgetc(fp))!=EOF)			// find the size of file.....
	l++;

char *p=malloc(l+1);				// array of file size....
rewind(fp);

while((ch=fgetc(fp))!=EOF)			// copy file into array.....
	p[i++]=ch;
	p[i]='\0';

printf("%s\n",p);				// array before replace.....
rewind(fp);

for(i=0;p[i];i++)				// check for charactor and replace it....
	if(p[i]==*argv[2])			// argv[2][0]....
		p[i]=*argv[3];			// argv[3][0]....

printf("..................................\n");
printf("%s\n",p);

for(i=0;p[i];i++)				// copy array into file.....
	fputc(p[i],fp);

}
