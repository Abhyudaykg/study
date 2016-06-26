/*	parent scan data from k.board and send to child , chld read that data using pipe and convert it into upper case and send to parent than parent read it and print it using two pipe....*/
#include"header.h"
void my_isr(int n)
{
;
}
int main()
{
int pid;
int p[2];
int q[2];
	if(pipe(p)<0)
	{
		perror("pipe");
		return;
	}
	if(pipe(q)<0)
	{
		perror("pipe");
		return;
	}
printf("pread_end=%d\n",p[0]);
printf("pwrite_end=%d\n",p[1]);
printf("qread_end=%d\n",q[0]);
printf("qwrite_end=%d\n",q[1]);
if(fork()==0)
{// chld
	char r[20];
	int i=0;
		printf("Befor data...\n");
	read(p[0],r,sizeof(r));
		for(i=0;r[i];i++)
			r[i]=r[i]-32;
	write(q[1],r,strlen(r)+1);
	printf("Data is resended....\n");
	kill(getppid(),10);

}
else
{// parent

	char s[20];
	signal(10,my_isr);
		printf("print the data \n");
		scanf(" %s",s);
	write(p[1],s,strlen(s)+1);
	pause();	
	read(q[0],s,sizeof(s));
		printf("Data=%s\n",s);
	
}

}

