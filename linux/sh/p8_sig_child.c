#include"header.h"
void my_isr(int n)
{
	wait(0);
	printf("In isr..\n");
}
int main()
{
	if(fork()==0)
	{
		printf("In child.before..\n");
		sleep(5);
		printf("In child after...\n");
	}
	else
	{
		printf("in parent ..\n");
		signal(17,my_isr);
		while(1);
	}
return 0;
}
