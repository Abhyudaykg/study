#include"header.h"

int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("ussage:./my_kill pid sig\n");
		return;
	}
printf("before kill \n");
kill(atoi(argv[1]),atoi(argv[2]));
	perror("kill");
printf("program end\n");

return 0;
}
