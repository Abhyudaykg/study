#include<stdio.h>
#include<stdlib.h>
//........................................................................................................................//
typedef struct student					// define structure...
{
unsigned int rollno;
char name[20];
float mark;
struct student *sp;
}ST;
//.......................................................................................................................//
void add_begin(ST **);
void display(ST *);

main()							// main...
{
ST *headptr=0;
char ch;

do							// get data.....
{
	add_begin(&headptr);
	printf("Do you want to add data Y/y \n");
	scanf(" %c",&ch);
}while((ch=='Y') || (ch=='y'));

display(headptr);
}
//........................................................................................................................//
void add_begin(ST **ptr)					// function to add data...0
{
ST *nd;
	nd=malloc(sizeof(ST));
printf("student rollno=\n");
scanf("%u",&nd->rollno);

printf("student name=\n");
scanf("%s",nd->name);

printf("student mark=\n");
scanf(" %f",&nd->mark);

nd->sp=*ptr;
*ptr=nd;
}
//........................................................................................................................//
void display(ST *p)						// function to print data...
{
	while(p)
	{
	printf("rollno=%u\nname=%s\nmark=%f",p->rollno,p->name,p->mark);
	printf("\n\n");
	p=p->sp;
	}
}
