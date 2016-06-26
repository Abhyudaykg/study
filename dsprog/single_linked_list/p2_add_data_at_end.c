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
void add_end(ST **);
void display(ST *);

main()
{
ST *headptr=0;
char ch;

do							// get data.....
{
	add_end(&headptr);
	printf("Do you want to add data Y/y \n");
	scanf(" %c",&ch);
}while((ch=='Y') || (ch=='y'));

display(headptr);
}
//........................................................................................................................//
void add_end(ST **ptr)
{
ST *nd;
ST *nd1;
	nd=malloc(sizeof(ST));
printf("student rollno=\n");
scanf("%u",&nd->rollno);

printf("student name=\n");
scanf("%s",nd->name);

printf("student mark=\n");
scanf(" %f",&nd->mark);

if(*ptr==0)
{
	nd->sp=*ptr;
	*ptr=nd;
}
else
{
	nd1=*ptr;
	while(nd1->sp)
	nd1=nd1->sp;

nd->sp=nd1->sp;
nd1->sp=nd;
}
}
//........................................................................................................................//
void display(ST *p)
{
	while(p)
	{
	printf("rollno=%u\nname=%s\nmark=%f",p->rollno,p->name,p->mark);
	printf("\n\n");
	p=p->sp;
	}
}
