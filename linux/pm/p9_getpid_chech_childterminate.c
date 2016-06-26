#include"header.h"
int main()
{
int s;
int a[3];
	if((a[0]=fork())==0)
	{
	int r;
	srand(getpid());
	r=rand()%10+1;
	printf("in child c1.getpid()=%d. r=%d \n",a[0],r);
	sleep(r);
	exit(0);
	}
	else 
	{
	if((a[1]=fork())==0)
	{
	int r;
	srand(getpid());
	r=rand()%10+1;
	printf("in child c2.getpid()=%d. r=%d \n",getpid(),r);
	sleep(r);
	exit(0);
	}
	else
	{
	if((a[2]=fork())==0)
	{
	int r;
	srand(getpid());
	r=rand()%10+1;
	printf("in child c3.getpid()=%d. r=%d\n",getpid(),r);
	sleep(r);
	exit(0);
	}
	else
	{
	int id;
	while((id=wait(0))!=-1)
	{
		printf("in while id=%d \n",id);
	if(id==a[0])
		printf("c1....\n");
	else if(id==a[1])
		printf("c2...\n");	
	else if(id==a[2])
		printf("c3...\n");
	}
	printf("in parent \n");
	}
}
}
return 0;
}

