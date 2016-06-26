#include"header.h"
int main()
{
int s;
	if(fork()==0)
	{
	int r;
	srand(getpid());
	r=rand()%10+1;
	printf("in child c1.getpid()=%d. r=%d \n",getpid(),r);
	sleep(r);
	exit(1);
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
	exit(2);
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
	exit(3);
	}
	else
	{
	int id;
	while((id=wait(&s))!=-1)
	{
	s=s>>8;
	if(s==1)
		printf("c1....\n");
	else
	if(s==2)
		printf("c2....\n");
	else
	if(s==3)
		printf("c3....\n");
	}
	printf("in parent \n");
}
}
}
return 0;
}
