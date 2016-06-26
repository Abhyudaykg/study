#include"header.h"
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("ussage:./a.out file1 file2\n");
		return;
	}
struct stat v,v1;
	if((stat(argv[1],&v))<0)
	{
		perror("stat");
		return;
	}
	if((stat(argv[2],&v1))<0)
	{
		perror("stat");
		return;
	}
printf("v.ino=%u v1.ino=%u\n",v.st_ino,v1.st_ino);
if(v.st_ino==v1.st_ino)
{
	lstat(argv[1],&v);
	lstat(argv[2],&v1);
printf("v.ino=%u v1.ino=%u\n",v.st_ino,v1.st_ino);
	if(v.st_ino==v1.st_ino)
		printf("Hard link...\n");
	else
		printf("soft link \n");
}
else
	printf("No link....\n");

return 0;
}
