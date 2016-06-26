#include"header.h"

void abc(void);
int main()
{
//atexit(abc);
printf("hello in main...\n");
sleep(1);
abc();
exit(1);
}
void abc(void)
{
	printf("Hello.... in abc...\n");
}
