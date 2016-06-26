#include"header.h"
void my_isr(void)
{
	printf("In isr....\n");
	alarm(3);
}
int main()
{
int ret;
signal(14,my_isr);
printf("Hello...\n");

ret=alarm(10);
	printf("ret=%d\n",ret);
sleep(5);
	ret=alarm("5");
		printf("ret=%d\n",ret);
printf("hi...\n");
while(1);


return 0;
}
