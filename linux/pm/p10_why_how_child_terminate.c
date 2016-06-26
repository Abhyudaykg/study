#include"header.h"
int main()
{
int s;
	if(fork()==0)
	{// child
		printf("In child....\n");
	sleep(10);
	printf("after sleep...in child \n");
	exit(s);
	}
	else
	{
		printf("in parent...\n");
		wait(&s);
	if(WIFEXITED(s))
		printf("normall because of....%d \n",WEXITSTATUS(s));
	else if(WIFSIGNALED(s))
		printf("SIGNAL BECAUSE OF ...%d  \n",WTERMSIG(s));

	}


return 0;
}
