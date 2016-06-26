#include"header.h"
int main()
{
float a[5];
int i;
float f;
//srand(time(0));
//srand(6);
srand(getpid());
for(i=0;i<5;i++)
{	a[i]=(float)(rand()%50+25)/100;			// randome number between 0.25 to 0.75....
}
for(i=0;i<5;i++)
	printf("a[%d]=%f \n",i,a[i]);



return 0;
}
