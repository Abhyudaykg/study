#include"header.h"
struct msgbuf
{
long int mtype;
char data[20];
};
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussage:./a.out type \n");
		return;
	}
struct msgbuf v;
int id;
	id=msgget(5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("msgget");
		return;
	}
printf("id=%d\n",id);

v.mtype=atoi(argv[1]);
	printf("Before....\n");
	msgrcv(id,&v,sizeof(v),v.mtype,0);
		perror("msgsnd");
	printf("after ");
	printf("DATA=%s\n",v.data); 
}
