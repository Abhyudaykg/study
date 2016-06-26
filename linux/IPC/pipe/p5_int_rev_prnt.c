/*	parent scan data from k.board and send to child , chld read that data using pipe and convert it into upper case and send to parent than parent read it and print it using two pipe....*/
#include"header.h"
void my_isr(int n)
{
;
}
int main()
{
int pid;
int num;
int p[2];
	if(pipe(p)<0)
	{
		perror("pipe");
		return;
	}
printf("pread_end=%d\n",p[0]);
printf("pwrite_end=%d\n",p[1]);
if(fork()==0)
{// chld
	int i=0;
		printf("Befor data...\n");
	read(p[0],&num,sizeof(int));
	int sum=0;
	for(;num;sum=num%10+sum*10,num=num/10);
	write(p[1],&sum,sizeof(int));
	printf("Data is resended....\n");
	kill(getppid(),10);

}
else
{// parent

	signal(10,my_isr);
		printf("print the data \n");
		scanf(" %d",&num);
	write(p[1],&num,sizeof(int));
	pause();	
	read(p[0],&num,sizeof(int));
		printf("Data=%d\n",num);
	
}

}

