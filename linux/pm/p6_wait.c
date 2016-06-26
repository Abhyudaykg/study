#include"header.h"
int main()
{
int s;
	if(fork()==0)
	{// child
		printf("In child before wait...getpid()=%d getppid()=%d \n",getpid(),getppid());
		sleep(50);
		printf("after sleep in child....\n");
		exit(1);
	}
	else
	{// parent
	int ret;
		printf("In parent befor wait.....getpid()=%d \n",getpid());
		ret=wait(&s);

		printf("In parent after wait..... getpid()=%d ret =%d s=%d \n",getpid(),ret,s);
	}



return 0;
}
