#include"header.h"

void my_isr(int n)
{
	printf("IN isr...\n");
	raise(9);
}
int main()
{
	signal(14,my_isr);
	printf("In main\n");
	alarm(2);
while(1);
return 0;
}
