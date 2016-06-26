#include"header.h"
int main()
{
int fd;

	close(1);//std_out
	fd=open("data",O_WRONLY|O_TRUNC);
	if(fd<0)
	{
		perror("open");
		return;
	}
printf("Hello....how are you\n",s);
printf("fd=%d\n",fd);


return 0;
}
