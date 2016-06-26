#include"header.h"
int main()
{
char s[20];
int fd;

	mkfifo("temp",0644);
		perror("mkfifo");
	printf("Before....\n");
		fd=open("f1",O_WRONLY);
	printf("after...\n");
while(1)
{
printf("Enter the data...\n");
scanf(" %[^\n]",s);
write(fd,s,strlen(s)+1);
}

return 0;
}
