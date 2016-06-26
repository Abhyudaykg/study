#include"header.h"
int main()
{

signal(3,SIG_IGN);
struct sigaction v;
int n;
	printf("Enter the signal...\n");
	scanf("%d",&n);

sigaction(n,0,&v);
if(v.sa_handler==SIG_DFL)
	printf("Default...\n");
else if(v.sa_handler==SIG_IGN)
	printf("ignore...\n");
else
	printf("my_isr...\n");

return 0;
}
