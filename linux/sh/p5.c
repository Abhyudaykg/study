/*	5. Write a program to ignore the termination of process when its terminal will close.     
           Hint : use   SIGHUP signal & signal().
*/
#include"header.h"

int main()
{
	printf("In parent...\n");
	signal(SIGHUP,SIG_IGN);
	while(1)
	{
		printf("Hello...\n");
		sleep(2);
	}
}
