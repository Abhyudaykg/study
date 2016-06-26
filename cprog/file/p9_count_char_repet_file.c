// take one character from user and count that character is how many time repeat....
#include<stdio.h>
main(int argc,char **argv)
{
FILE *fp;
char ch;
int c=0;

	if(argc!=3)
	{
		printf("ussage: ./a.out filename char\n");
		return;
	}
fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("File does not exist\n");
		return;
	}
while((ch=fgetc(fp))!=EOF)	
	if(ch==*argv[2])
		c++;

printf("%c repeat %d time\n",*argv[2],c);

}
