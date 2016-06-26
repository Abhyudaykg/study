/*	6. Write a program to creat  3 new  jobs , in such a manner that all the 3 new jobs should have common parent.
	x------bash
	x+1 --- x
	x+2----x
	x+3---x
*/
#include"header.h"
int main()
{
		printf("getpid()=%d getppid()=%d \n",getpid(),getppid());
	if(fork()==0)
		printf("getpid()=%d getppid()=%d \n",getpid(),getppid());
	else if(fork()==0)
		printf("getpid()=%d getppid()=%d \n",getpid(),getppid());
	else if(fork()==0)
		printf("getpid()=%d getppid()=%d \n",getpid(),getppid());
	else
		while(1);
return 0;
}
