#include"header.h"
int main()
{
int s;
int a[5];
if((a[0]=fork())==0)
{// child 1
int r;
srand(getpid());
r=rand()%10+1;
	printf("ch1..getpid()=%d r=%d..before sleep..\n",getpid(),r);
	sleep(20);
	printf("after sleeep. c1..\n");
exit(0);
}
else
{
if(fork()==0)
{
int r;
srand(getpid());
r=rand()%10+1;
	printf("ch2..getpid()=%d .r=%d .before sleep..\n",getpid(),r);
	sleep(10);
	printf("after sleeep.c2..\n");
	exit(0);

}
else
{
	printf("in parent...\n");
	waitpid(a[0],&s,WCONTINUED|WUNTRACED);
//	waitpid(-1,&s,0);
	printf("parent end...\n");
}
}
return 0;
}

