#include"header.h"

//.................................................main........................................................................//

unsigned int c=0;
main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussage: ./a.out Filename\n");
		return;
	}
char ch;
ST *headptr=0;

readfile(&headptr,argv[1]);					//	by reading data from file creat linkedlist...

	do
	{
		add_middle(&headptr);
		printf("Do you want to add data Y/y \n");
		scanf(" %c",&ch);
		c=countdata(c);
	}while((ch=='Y') || (ch=='y'));

	rev(&headptr,c);
	display(headptr,c);
	fsave(headptr,argv[1]);
}

//..........................................................................................................................//
