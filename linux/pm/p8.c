//	8. In the above given prog execute ls, pwd ,cal ,date command by x,x+1,x+2,x+3 respectively.
#include"header.h"
int main()
{
int a[4];
int s;
	if((a[3]=fork())==0)
	{
		printf("getpid()=%d getppid()=%d\n",getpid(),getppid());
		if((a[2]=fork())==0)
		{
			printf("getpid()=%d getppid()=%d\n",getpid(),getppid());
			if((a[1]=fork())==0)
			{	
				printf("getpid()=%d getppid()=%d\n",getpid(),getppid());
				execlp("ls","ls",NULL);
				exit(0);
			}
			execlp("pwd","pwd",NULL);
			exit(0);
		}
	execlp("cal","cal",NULL);
	exit(0);
	}
	else
	{
		printf("getpid()=%d getppid()=%d\n",getpid(),getppid());
		waitpid(a[1],&s,0);
		waitpid(a[2],&s,0);
		waitpid(a[3],&s,0);
		execlp("date","date",NULL);
	}
return 0;
}
