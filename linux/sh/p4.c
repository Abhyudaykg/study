/*		4. Write a program to remove the zombie. 
	           Hint : Use SIGCHLD  &signal( ).
*/
#include"header.h"
int cpid;
int c=0;
void my_isr(int n)
{
	printf("In ISR...\n");
	kill(cpid,9);
}

int main()
{
	if((cpid=fork())==0)
	{	system("ps");
		printf("In child...\n");
		sleep(2);
		printf("child end\n");
	}
	else
	{
		printf("In parent...\n");
		signal(SIGCHLD,my_isr);
		printf("after child...\n");
		wait(0);
		while(1);
	}
return 0;
}
