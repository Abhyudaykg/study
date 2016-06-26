#include"header.h"
int main()
{
int n;
	printf("signal no:\n");
	scanf("%d",&n);
void (*p)(int);
p=signal(n,SIG_IGN);
	signal(n,p);
if(p==SIG_DFL)
	printf("Default...\n");
else if(p==SIG_IGN)
	printf("ignore...\n");
else
	printf("my_isr...\n");
return 0;

}
