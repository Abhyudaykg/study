/*	7. Modify the above program .So that no two jobs have the common parent.
	{each job have different parent).
	 x------bash
	x+1 ---x
	x+2----x+1
	x+3---x+2
*/
#include"header.h"
int main()
{
	if(fork()==0)
	{
		printf("getpid()=%d getppid()=%d\n",getpid(),getppid());
		if(fork()==0)
		{
			printf("getpid()=%d getppid()=%d\n",getpid(),getppid());
			if(fork()==0)
			{	
				printf("getpid()=%d getppid()=%d\n",getpid(),getppid());
				exit(0);
			}
			exit(0);
		}
	exit(0);
	}
	else
	{
		printf("getpid()=%d getppid()=%d\n",getpid(),getppid());
		wait(0);
		wait(0);
		wait(0);
	}
return 0;
}
