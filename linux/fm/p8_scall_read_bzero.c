#include"header.h"
int main()
{
int i;
int fd;
	fd=open("data",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return;
	}
printf("fd=%d\n",fd);
int ret;
//bzero(s,sizeof(s));
	ret=read(fd,&i,sizeof(int));
printf("ret=%d\n",ret);
printf("DATA=%d\n",i);


return 0;
}
