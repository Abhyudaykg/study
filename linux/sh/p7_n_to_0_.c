#include"header.h"
int n;
void my_isr(int i)
{
	n--;
	printf("In isr..\n");
	if(n==0)
		raise(9);
	else
		alarm(n);
}
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussage:./a.out seconds\n");
		return 0;
	}
n=atoi(argv[1]);
signal(14,my_isr);
alarm(n);
while(1);

return 0;
}
