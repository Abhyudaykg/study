/*	parent scan data from k.board and send to child , chld read that data using pipe and convert it into upper case and send to parent than parent read it and print it using two pipe....*/
#include"header.h"
void my_isr(int n)
{
;
}
struct cal
{
int n1;
int n2;
char ch;
int ans;
}s;
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
	read(p[0],&s,sizeof(s));
	switch(s.ch)
	{
	case '+':s.ans=s.n1+s.n2;
		break;
	case '-':s.ans=s.n1-s.n2;
		break;
	case '/':s.ans=s.n1/s.n2;
		break;
	case '*':s.ans=s.n1*s.n2;
		break;
	default: 
		printf("wrong option\n");
	}
	write(p[1],&s,sizeof(s));
	printf("Data is resended....\n");
	kill(getppid(),10);

}
else
{// parent

	signal(10,my_isr);
		printf("print the n1 n2 and option= \n");
		scanf("%d %d %c",&s.n1,&s.n2,&s.ch);
	write(p[1],&s,sizeof(s));
	pause();	
	read(p[0],&s,sizeof(s));
		printf("ans=%d\n",s.ans);
	
}

}

