#include"header.h"
int main()
{
int fd;
	fd=open("ab",O_EXCL|O_CREAT,0644);
//fp=fopen("data","w");
//	fd=open("data",O_WRONLY|O_TRUNC|O_CREAT,0644);


printf("fd=%d\n",fd);
while(1);
return 0;
}
