#include"header.h"
void my_isr(int n)
{
	printf("In isr...\n");
}
int main()
{
struct sigaction v;

v.sa_handler=my_isr;
sigemptyset(&v.sa_mask);
v.sa_flags=0;

printf("hello...\n");
sigaction(SIGINT,&v,0);

printf("hai...\n");

while(1);

return 0;
}
