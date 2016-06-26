/*	1. Write a program to execute ls ,pwd & cal sequentially
		a) Using system( )
  	       	b) Using exec( )
		Hint : use fork().
*/
#include"header.h"
void a1(void);


int main()
{
//a1();
int s;
int a[3];
if((a[0]=fork())==0)
{
	execlp("ls","ls",NULL);
	exit(s);
}
else
{
	waitpid(a[0],&s,0);
	if((a[1]=fork())==0)
	{
		execlp("pwd","pwd",NULL);
		exit(s);
	}
	else
	{
		waitpid(a[1],&s,0);
		if((a[2]=fork())==0)
		{
			execlp("cal","cal",NULL);
			exit(s);
		}	
		else
		{
			printf("In parent...\n");
			waitpid(a[2],&s,0);
			printf("End of parent...\n");
		}
	}
}

return 0;
}

void a1(void)
{
system("ls");
system("pwd");
system("cal");
}
