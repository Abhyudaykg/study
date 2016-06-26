#include"header.h"
void my_isr(int n)
{
	printf("In my_isr....\n");
}
int main()
{
struct rlimit v;
signal(10,my_isr);
int s;
int pid;

	if((getrlimit(RLIMIT_STACK,&v))<0)
	{
		perror("getrlimit");
		return;
	}
		printf("soft limit=%u \n",v.rlim_cur);
		printf("hard limit=%u \n",v.rlim_max);
	v.rlim_cur=10000;
		setrlimit(RLIMIT_STACK,&v);
		
		getrlimit(RLIMIT_STACK,&v);
		printf("soft limit=%u \n",v.rlim_cur);
		printf("hard limit=%u \n",v.rlim_max);

	if((pid=fork())==0)
	{
		printf("in child...\n");
	if((getrlimit(RLIMIT_STACK,&v))<0)
	{
		perror("getrlimit");
		return;
	}
		printf("soft limit=%u \n",v.rlim_cur);
		printf("hard limit=%u \n",v.rlim_max);
	}
return 0;
}
