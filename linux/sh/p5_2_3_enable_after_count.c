#include"header.h"
static int c1;
static int c2;

void my_isr(int n)
{
	printf("In isr...\n");
if(n==2)
{
	c1++;
	if(c1==4)
		signal(2,SIG_DFL);
}
else if(n==3)
{
	c2++;
	if(c2==2)
		signal(3,SIG_DFL);
}

}
int main()
{
signal(2,my_isr);
signal(3,my_isr);
printf("in main ...\n");
while(1);
return 0;

}
