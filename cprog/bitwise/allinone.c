#include"header.h"

void setbit(int n,int pos);
void clrbit(int n,int pos);
void compbit(int n,int pos);
void chkevenodd(int n);
void poornv(int n);
void swap(int n,int m);
void povof2(int n);
void divby8(int n);
void rotwtcry(int n);
void utol(char ch);
void ltou(char ch);
void revbit(int n);
void chksm(int n,int m);

int main()
{
int op;
int num,num2;
int pos;
char ch;
printf("Enter the opetion \n");
printf("1> set the bit\n2> clear the bit\n3> complex the bit\n4> chk even or odd\n5> chk +ve or -ve \n6> swap two number\n7> chk power of two\n");
printf("8> chk dived by 8\n9> rotate with cary\n10> u to l\n11> l to u\n12> reverse the bit\n13> chk that number is same or not\n");
scanf(" %d",&op);

switch(op)
{
case 1:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		printf("Enter the position\n");
		scanf(" %d",&pos);
		setbit(num,pos);
	}
	break;
case 2:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		printf("Enter the position\n");
		scanf(" %d",&pos);
		clrbit(num,pos);
	}
	break;
case 3:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		printf("Enter the position\n");
		scanf(" %d",&pos);
		compbit(num,pos);
	}
	break;
case 4:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		chkevenodd(num);
	}
	break;
case 5:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		poornv(num);
	}
	break;
case 6:
	{
		printf("Enter two number\n");
		scanf(" %d %d",&num,&num2);
		swap(num,num2);
	}
	break;
case 7:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		povof2(num);
	}
	break;
case 8:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		divby8(num);
	}
	break;

case 9:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		rotwtcry(num);
	}
	break;

case 10:
	{
		printf("Enter the char in upper case\n");
		scanf(" %c",&ch);
		utol(ch);
	}
	break;
case 11: 
	{
		printf("Enter the char in lower case\n");
		scanf(" %c",&ch);
		ltou(ch);
	}
	break;
case 12:
	{
		printf("Enter the number\n");
		scanf(" %d",&num);
		revbit(num);
	}
	break;
case 13:
	{
		printf("Enter the two number\n");
		scanf(" %d %d",&num,&num2);
		chksm(num,num2);
	}
	break;

default:
	printf("In valid\n Try again...\n");

}


return 0;
}
void setbit(int n,int p)
{
	printf("n=%d\n",n);
	printf("p=%d\n",p);
	n=n | (1<<p);
	printf("n=%d\n",n);
}
void clrbit(int n,int p)
{
	printf("n=%d\n",n);
	printf("p=%d\n",p);
	n=n & (~ (1<<p) );
	printf("n=%d\n",n);
}
void compbit(int n,int p)
{
	printf("n=%d\n",n);
	printf("p=%d\n",p);
	n=n^ (1<<p);
	printf("n=%d\n",n);
}
void chkevenodd(int n)
{
if(n==0)
	printf("Invalid entry...\n");
else
	{
	if(n&1)
		printf("odd\n");
	else
		printf("even\n");
	}
}
void poornv(int n)
{
if(n>>31)
	printf("-ve\n");
else
	printf("+ve\n");
}
void swap(int n,int m)
{
printf("n=%d\t m=%d\n",n,m);
n=n^m;
m=n^m;
n=n^m;
printf("n=%d\t m=%d\n",n,m);
}
void povof2(int n)
{
int power=0;
if(n & (n-1) )
	printf("not power of two\n");
else
{
	printf("power of two\n");
while((n=n>>1))
	power++;
printf("power=%d\n",power);
}
}
void divby8(int n)
{
if(n & (n-7) )
	printf("not divisble by 8\n");
else
	printf("divisble\n");
}
void rotwtcry(int n)
{
int shift;
int dir;
int m=0;
printf("how much you want to shift ?\n");
scanf(" %d",&shift);
printf("which direction ?\n1> left\n2> right\n");
scanf(" %d",&dir);
printf("n=%d\n",n);
if(dir==1)
{
m= n >> (32-shift);
n= n << shift | m;
}
else
{
m= n << (32-shift);
n= n >> shift | m;
}
printf("n=%d\n",n);
}
void utol(char ch)
{
printf("ch=%c\n",ch);
ch= ch | (1<<5);
printf("ch=%c\n",ch);
}
void ltou(char ch)
{
printf("ch=%c\n",ch);
ch=ch & (~(1<<5));
printf("ch=%c\n",ch);
}
void revbit(int num)
{
int n=0,m=0;
int i,j;
printf("num=%d\n",num);
for(i=31,j=0;i>j;i--,j++)
{
n=num>>i&1;
m=num>>j&1;
if(n!=m)
{
num= num ^ (1<<i);
num= num ^ (1<<j);
}
}
printf("num=%d\n",num);
}
void chksm(int n,int m)
{
	(n== (n&m) )?printf("same\n"):printf("not same\n");
}
