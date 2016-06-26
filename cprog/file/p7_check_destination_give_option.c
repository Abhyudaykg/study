// first check that the destination file is present or not and give option to overwrite....
#include<stdio.h>
main(int argc,char **argv)
{
FILE *sp,*dp;
char ch,op;

	if(argc!=3)
	{
		printf("ussage: ./a.out source destination \n");
		return;
	}
sp=fopen(argv[1],"r");

	if(sp==0)
	{
		printf("source file does not exist \n");
		return;
	}
dp=fopen(argv[2],"r");

	if(dp)
	{
		printf("destination file is already present...\n");
		printf("you want to over write ?\n");
		printf("YES=Y\nNO=N\nEnter=");
		scanf("%c",&op);
	}
switch(op)
{

case 'Y':
		dp=fopen(argv[2],"w");
		while((ch=fgetc(sp))!=EOF)
			fputc(ch,dp);
		break;
case 'N':
		break;
default:
		printf("Invalid opetion...\n");
		break;
}
}
