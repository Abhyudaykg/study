#include"header.h"
int main()
{
char s[20];
int fd;
	mkfifo("f1",0644);
		perror("mkfifo");
	printf("Before...\n");
		fd=open("f1",O_RDONLY);
	printf("after....\n");
while(1)
{
read(fd,s,sizeof(s));
printf("DATA=%s\n",s);
}


return 0;
}
