/*		2. Create a watch dog timer in parent which should watch T.A.T of its child and terminate the  child.
                   Condition:  The child have random delay(1-10 sec)
                   If the child take more than 5 sec then parent terminate it.
                   Hint : fork(),sleep?(),kill(),alarm().
*/
#include"header.h"
int pid;
void my_isr(int n)
{
	printf("In ISR....\n");
	kill(pid,9);	
}

int main()
{
	if((pid=fork())==0)
	{
		printf("In child...\n");
		int i;
		srand(getpid());
		i=rand()%10+1;
		printf("getpid()=%d   i=%d...\n",getpid(),i);
		sleep(i);
	}
	else
	{
		signal(14,my_isr);
		printf("In parent...\n");
		alarm(5);
		wait(0);
		printf("After child....\n");
	}



return 0;
}
