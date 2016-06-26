#include"header.h"
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussage:./get semnum\n");
		return;
	}
int ret;
int id;
id=semget(5,5,IPC_CREAT|0644);
if(id<0)
{
	perror("semget");
	return;
}
printf("id=%d\n",id);
ret=semctl(id,atoi(argv[1]),GETVAL);
	printf("ret=%d\n",ret);
return 0;
}
