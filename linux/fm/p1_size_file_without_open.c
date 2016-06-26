#include"header.h"
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussage:./a.out filename \n");
		return;
	}
struct stat v;

	if((stat(argv[1],&v))<0)
	{
		perror("stat");
		return;
	}
	printf("Size of file=%u\n",v.st_size);
	printf("inod no of file=%u\n",v.st_ino);
	printf("mode of file=%u\n",v.st_mode);
	printf("dev of file=%u\n",v.st_dev);
	


return 0;
}
