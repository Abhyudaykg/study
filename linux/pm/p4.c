#include"header.h"
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussag:./a.out cmd1,cmd2....\n");
		return;
	}
FILE *fp;
int l=strlen(argv[1]);
char s[l+1];
char ch='a';
int i=0;
	fp=fopen(".temp","w+");
		perror("fopen");
strcpy(s,argv[1]);
l=strlen(s);

while(ch!='\0')
{
	ch=s[i++];
	if(ch!=','&&ch!='\0')
		fprintf(fp,"%c",ch);
	else if(ch==',')
		fprintf(fp,"%c",' ');
}
rewind(fp);

while((fscanf(fp,"%s",s)!=EOF))
{
	system(s);
}

system("rm .temp");
return 0;
}
