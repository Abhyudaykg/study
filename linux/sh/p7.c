/*	7. Write a program to create 3 child process from common parent use random delay between  1 to 10 sec in each child. Use alarm()           in parent in such a manner that 
	          Child1 should not exceeds more than 4 sec. 
	          Child2 should not exceeds more than 6 sec.
	          Child3 should not exceeds more than 8 sec.
*/
#include"header.h"
int a[3];
int k=0;
void my_isr(int n)
{
	printf("n=%d\n",n);
	kill(a[k],9);
	k++;
}
int main()
{
	int s;
	signal(14,my_isr);
	if((a[0]=fork())==0)
	{	int i;
		srand(getpid());
		i=rand()%10+1;
		printf("1> getpid()=%d.i=%d..\n",getpid(),i);
		sleep(i);
		exit(0);
	}
	else
	{
		if((a[1]=fork())==0)
		{
			int i;
			srand(getpid());
			i=rand()%10+1;
			printf("2> getpid()=%d.i=%d..\n",getpid(),i);
			sleep(i);
			exit(0);
		}
		else
		{
			if((a[2]=fork())==0)
			{
				int i;
				srand(getpid());
				i=rand()%10+1;
				printf("3> getpid()=%d.i=%d..\n",getpid(),i);
				sleep(i);
				exit(0);
			}
			else
			{	int ret;
				printf("In parent\n");
				alarm(4);
				waitpid(a[0],&s,0);
				alarm(2);
				waitpid(a[1],&s,0);
				alarm(2);
				waitpid(a[2],&s,0);
				while(1);
			}
		}
	}

return 0;
}
