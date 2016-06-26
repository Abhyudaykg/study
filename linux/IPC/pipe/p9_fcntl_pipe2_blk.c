#include"header.h"
int main()
{
char ch='a';
int p[2];
int c=0;

// pipe2(p,O_NONBLOCK);
if(pipe(p)<0)
{
	perror("pipe");
	return;
}
fcntl(p[1],F_SETFL,O_NONBLOCK);
while(write(p[1],&ch,1)!=-1)
{
	c++;
}
printf("c=%d\n",c);
printf("Bye...\n");
return 0;
}
