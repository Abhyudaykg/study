#include"header.h"
int main()
{
time_t t1,t2;
	while(1)
	{
//	t1=time(&t2);
	time(&t2);
//	t1=time(0);
	printf("%d\n",(int)t2);
	sleep(1);
	system("clear");


	}

return 0;
}
