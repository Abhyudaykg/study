#include"header.h"

int main()
{


if(fork()==0)
{
//child
printf("Befor sleep getpid()=%d\tgetppid()=%d\n",getpid(),getppid());
sleep(15);
printf("after sleep getpid()=%d\tgetppid()=%d\n",getpid(),getppid());

}
else
{
//parent
printf("\n in parent before sleep...getpid=%d \n",getpid());
sleep(1);
printf("\n in parent after sleep... getpid=%d \n",getpid());

}

return 0;
}
