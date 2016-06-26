#include"header.h"
int main()
{
	if(fork()==0)
	{
	int r;
	srand(getpid());
	r=rand()%10+1;
	printf("in child c1.getpid()=%d. r=%d \n",getpid(),r);
	sleep(r);
	printf("after sleep. c1..\n");
	exit(0);
	}
	else 
	{
	if(fork()==0)
	{
	int r;
	srand(getpid());
	r=rand()%10+1;
	printf("in child c2.getpid()=%d. r=%d \n",getpid(),r);
	sleep(r);
	printf("after sleep.. c2.\n");
	exit(0);
	}
	else
{
	 if(fork()==0)
	{
	int r;
	srand(getpid());
	r=rand()%10+1;
	printf("in child c3.getpid()=%d. r=%d\n",getpid(),r);
	sleep(r);
	printf("after sleep   c3...\n");
	exit(0);
	}
	else
	{
	int id;
		while((id=wait(0))!=-1);
	printf("in parent\n");
	}
}
}
return 0;
}
