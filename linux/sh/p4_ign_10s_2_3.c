// disable ctl+c and ctl+\ for 10 second....
#include"header.h"
void my_isr(int n)
{
	printf("in isr ...\n");
signal(SIGINT,SIG_DFL);
signal(SIGQUIT,SIG_DFL);
}
int main()
{
signal(SIGINT,SIG_IGN);
signal(SIGQUIT,SIG_IGN);
signal(14,my_isr);
alarm(10);
while(1);

return 0;
}
