// parent scan data from k.b and send to child, child read and print.......//
#include"header.h"
int main()
{
int p[2];
	if(pipe(p)<0)
	{
		perror("pipe");
		return;
	}
printf("p[0]=readend=%d \n",p[0]);
printf("p[1]=writeend=%d \n",p[1]);

	if(fork()==0)
	{// child
		char s[20];
		printf("In child before read.....\n");
		read(p[0],s,sizeof(s));
			perror("read");
		printf("Data in child=%s \n",s);
	}
	else
	{// parent
		char a[20];
		printf("Enter the data...\n");
		scanf("%s",a);
		write(p[1],a,strlen(a)+1);
		read(p[0],a,sizeof(a));
		printf("in poarent =%s \n",a);
	}

return 0;
}
