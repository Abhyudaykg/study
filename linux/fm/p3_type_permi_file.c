#include"header.h"
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussage:./a.out filename\n");
		return;
	}
struct stat v;
	stat(argv[1],&v);
	printf("mode=%o\n",v.st_mode);
	printf("access permition=%o\n",v.st_mode&0777);
	printf("type=%o\n",v.st_mode>>9);

if(S_ISREG(v.st_mode))
	printf("Reguler file....\n");
else if(S_ISDIR(v.st_mode))
	printf("Directory file....\n");
else if(S_ISBLK(v.st_mode))
	printf("Block file....\n");
else if(S_ISLNK(v.st_mode))
	printf("link file....\n");
else if(S_ISCHR(v.st_mode))
	printf("Charector special file....\n");
else if(S_ISFIFO(v.st_mode))
	printf("Pipe file....\n");
else if(S_ISSOCK(v.st_mode))
	printf("Socket file....\n");

return 0;
}
