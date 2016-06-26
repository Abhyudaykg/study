// raise give signale to calling process...

#include"header.h"
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussage:./my_kill sig\n");
		return;
	}
printf("before kill \n");
//raise(atoi(argv[1]));
pause();
//kill(getpid(),atoi(argv[1]));		// int raise(int sig);
//	perror("kill");
printf("program end\n");

return 0;
}
