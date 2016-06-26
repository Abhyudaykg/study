#include"header.h"
int main()
{
struct flock v;
char s[]="abhyuday";
int fd;
int i=0;
	fd=open("data",O_CREAT|O_RDWR|O_APPEND,0644);
v.l_type=F_WRLCK;
v.l_whence=SEEK_SET;
v.l_start=0;		// starting address of lock...
v.l_len=0;		// how many byte will block......

	printf("Before....\n");
	fcntl(fd,F_SETLKW,&v);
	printf("After...\n");

for(i=0;s[i];i++)		// critical section of code...
{
	write(fd,&s[i],1);
	sleep(1);
}

	v.l_type=F_UNLCK;	// we unlock the resource....
	fcntl(fd,F_SETLK,&v);
printf("Avjo....\n");

return 0;
}
