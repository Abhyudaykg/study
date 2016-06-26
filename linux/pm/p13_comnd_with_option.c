#include"header.h"
int main(int argc,char **argv)
{
	if(argc<2)
	{
		printf("ussage: ./a.out command option \n");
		return;
	}
FILE *fp;
int c=0;
char ch;
	fp=fopen("temp","w+");
int i=1;
	while(argv[i]!='\0')
	{
		fprintf(fp,"%s ",argv[i++]);
	}
rewind(fp);
	while((ch=fgetc(fp))!=EOF)
		c++;
rewind(fp);
char s[10];
	fgets(s,c+1,fp);
		printf("%s \n",s);
	system(s);
fclose(fp);
	system("rm temp");
return 0;
}
