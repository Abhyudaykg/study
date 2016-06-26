/*	13. Write a program to i/p 2 small(1 to 50) integers from command line and add two interger in child process and print th		e sum in parent process.
*/

#include"header.h"
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("ussage:./a.out a b \n");
		return;
	}
int a;
int b;
int ans;
int s;
char str[2];
a=atoi(argv[1]);
b=atoi(argv[2]);
FILE *fp;
	if(fork()==0)
	{	ans=a+b;
		fp=fopen(".temp","w");
		fprintf(fp,"%d",ans);
		exit(0);
	}
	else
	{
		wait(&s);
		fp=fopen(".temp","r");
		fscanf(fp,"%s",str);
		printf("result=%d \n",atoi(str));
		system("rm .temp");
	}


return 0;
}
