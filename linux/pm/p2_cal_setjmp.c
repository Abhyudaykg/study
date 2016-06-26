#include"header.h"

int sum(int,int);
int sub(int,int);
int mul(int,int);
int divd(int,int);

jmp_buf v;

int main()
{
int n1,n2,ans,op,r;
r=setjmp(v);
	printf("r=%d \n",r);
switch(r)
{
case 3: printf("Your one of argument is ZERO in MUL() so try again....\n");
	break;
case 4: printf("Can not devide by ZERO .....\n");
	break;
}
	printf("Enter the n1 and n2 \n");
	scanf("%d %d",&n1,&n2);
	printf("Enter the option \n");
	scanf("%d",&op);

switch(op)
{

case 1:	printf("Answer=%d \n",sum(n1,n2));
	break;
case 2:	printf("Answer=%d \n",sub(n1,n2));
	break;
case 3:	printf("Answer=%d \n",mul(n1,n2));
	break;
case 4:	printf("Answer=%d \n",divd(n1,n2));
	break;
default:	printf("Invalid option..\n");
}

return 0;
}

int sum(int n1,int n2)
{
return n1+n2;
}
int sub(int n1,int n2)
{
return n1-n2;
}
int mul(int n1,int n2)
{
	if(n2==0 || n1==0)
		longjmp(v,3);
return n1*n2;
}
int divd(int n1,int n2)
{
	if(n2==0)
		longjmp(v,4);
return n1/n2;
}
