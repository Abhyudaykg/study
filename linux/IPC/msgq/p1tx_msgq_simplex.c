#include"header.h"
struct msgbuf
{
long int mtype;
char data[20];
};
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("ussage:./a.out type data \n");
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
printf("ID=%d\n",id);
v.mtype=atoi(argv[1]);
strcpy(v.data,argv[2]);
	printf("Before...\n");
	msgsnd(id,&v,strlen(v.data)+1,0);
		perror("msgsnd");
	printf("after...\n");
}
