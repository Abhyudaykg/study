#include"header.h"
int main()
{
FILE *fp;

	fp=fopen("data","r");
	perror("fopen");
return 0;
}
