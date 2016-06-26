//	9. In the above program the o/p sequence must be date->pwd->cal->ls

#include"header.h"
int main()
{
int a[4];
int s;
		printf("getpid()=%d getppid()=%d \n",getpid(),getppid());
	if((a[1]=fork())==0)
	{	system("date");
		exit(s);
	}
	else 
	{	waitpid(a[2],&s,0);
		if((a[2]=fork())==0)
			system("pwd");
			
		else 
		{	waitpid(a[2],&s,0);
			if((a[3]=fork())==0)
			system("cal");
			else
			{	waitpid(a[3],&s,0);
				system("ls");					
			}
		}
	}

return 0;
}
