#include"header.h"
struct msgbuf
{
long int mtype;
char data[30];
};
int main()
{
int id;
	id=msgget(5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("msgget");
		return;
	}
printf("ID=%d\n",id);

	if(fork()==0)
	{//chld
	struct msgbuf vr;
	vr.mtype=3;
	printf("Before...\n");
	while(1)
	{
		msgrcv(id,&vr,sizeof(vr),vr.mtype,0);
		printf("DATA=%s\n",vr.data);
	}
	}
	else
	{//parent
	struct msgbuf vt;
	vt.mtype=2;
	while(1)
	{
		printf("Enter the data\n");	
		scanf(" %s",vt.data);
		msgsnd(id,&vt,strlen(vt.data)+1,0);
			perror("msgsnd");
	}
	}
return 0;
}
