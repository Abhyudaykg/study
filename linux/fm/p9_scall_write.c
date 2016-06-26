#include"header.h"
int main()\
{
int fd;
int i;
	fd=open("data",O_WRONLY|O_TRUNC);
i=10;
write(fd,&i,sizeof(int));



return 0;
}
