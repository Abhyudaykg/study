#include"header.h"
void my_isr(int n)
{
	printf("In isr ...\n");
}
int main()
{
	if(fork()==0)
	{
		printf("in child getpid()=%d\n",getpid());
		while(1);
	}
	else
	{
	struct sigaction v;
	v.sa_handler=my_isr;
	sigemptyset(&v.sa_mask);
	v.sa_flags=SA_NOCLDSTOP|SA_NOCLDWAIT;

	sigaction(17,&v,0);
	while(1);
	}


return 0;
}

