/*	parent scan data from k.board and send to child , chld read that data using pipe and print it....*/

#include"header.h"
int main()
{
int p[2];
	if(pipe(p)<0)
	{
		perror("pipe");
		return;
	}
printf("read_end=%d\n",p[0]);
printf("write_end=%d\n",p[1]);
if(fork()==0)
{// chld
	char r[20];
	while(1)
	{
		printf("Befor data...\n");
	read(p[0],r,sizeof(r));
		printf("Data=%s\n",r);
	
	}
}
else
{// parent

	char s[20];
//	while(1)
	{
		printf("print the data \n");
		scanf(" %s",s);
	write(p[1],s,strlen(s)+1);
	}
}

}
