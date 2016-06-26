#include"header.h"

jmp_buf v;
void abc(void);

int main()
{
setjmp(v);

	printf("In main befor abc.....\n");
	abc();
	printf("In main after abc.....\n");	

return 0;
}
void abc(void)
{
	printf("In abc.......enter\n");
	sleep(1);
	longjmp(v,1);
}
