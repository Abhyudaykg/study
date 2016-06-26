#include"header.h"
void my_isr(int n)
{
;
}

int main()
{
int p[2];
	pipe(p);
if(fork()==0)
{//child
close(1);
p[1]=dup(p[1]);
close(p[0]);
system("ls -l");
kill(getppid(),10);
}
else
{// parent
signal(10,my_isr);
pause();
close(0);
p[0]=dup(p[0]);
close(p[1]);
system("wc");
}
return 0;
}


