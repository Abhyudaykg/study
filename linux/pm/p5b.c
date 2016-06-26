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
int c=1;
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
	{
		fprintf(fp,"%c",' ');
		c++;
	}
}
rewind(fp);

for(;c;c--)
{
	fscanf(fp,"%s",s);
	if(fork()==0)
	{
		execlp(s,s,NULL);
		exit(0);
	}
	else
	wait(0);
}
/*
while((fscanf(fp,"%s",s)!=EOF))
{
	system(s);
}
*/


system("rm .temp");
return 0;
}
