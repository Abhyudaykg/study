#include"header.h"
int main()
{
char ch='a';
int p[2];
int c=0;
	pipe(p);
	while(write(p[1],&ch,1)!=-1)
	{
	c++;
	printf("c=%d\n",c);

	}

return 0;
}
