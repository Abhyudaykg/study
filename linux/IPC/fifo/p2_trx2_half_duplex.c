#include"header.h"
int main()
{
char s[20];
int fd,fd1;
	mkfifo("f1",0644);
		perror("mkfifo");
	mkfifo("f2",0644);
		perror("mkfifo");
printf("Before...\n");
	fd1=open("f1",O_RDONLY);
	fd=open("f2",O_WRONLY);
printf("after...\n");
while(1)
{
	read(fd1,s,sizeof(s));
	printf("DATA=%s\n",s);
	sleep(1);
	printf("Enter the data..\n");
	scanf(" %[^\n]",s);
	write(fd,s,strlen(s)+1);
}
return 0;
}
