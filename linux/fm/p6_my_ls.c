#include"header.h"
int main(int argc,char **argv)
{
	if(argc>2)
	{
		printf("ussage:./my_ls path  or  ./my_la\n");
		return;
	}
DIR *dp;
struct dirent *p;
struct stat v;
if(argc==1)
{
dp=opendir(".");
	if(dp==0)
	{
		perror("opendir");
		return;
	}
while(p->readdir(dp))
	if(p->d_name[0]!=".")
	{
		stat(d_name,&v);
		




	}

}
else if(argc==2)
{





}



}
