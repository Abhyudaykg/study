//	3)	 Write a program to find the no.of times the character is found in a given string.
#include<stdiio.h>
#include<stdlib.h>

struct S
{
char ch;
int in;
};

int main(int argc,char **argv)
{
	if(argc!=2)
	{	
		printf("ussage:./a.out string\n");
		break;
	}
int ele;
int i,j,k;
for(ele=0;**argv;ele++);
struct S s[ele];
for(i=0;i<ele;i++)
{
	for(j=0;j<i;j++)
	{
		if(*argv[i]==*argv[j])
		break;
	}
	if(i==j)
		s[i].ch=*(*argv[i]);











}




return 0;
}
