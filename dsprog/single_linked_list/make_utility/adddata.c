#include"header.h"

extern c;
//....................................................middle.................................................................//

void add_middle(ST **ptr)				//	add the data....
{
ST *tempn;
ST *tempo;
tempo=*ptr;

	tempn=malloc(sizeof(ST));

printf("rollno=");
scanf("%u",&tempn->rollno);

printf("name=");
scanf("%s",tempn->name);

printf("mark=");
scanf("%f",&tempn->mark);

if(checkdata(*ptr,tempn->rollno))			// rollno  present or not check it ....
{
	free(tempn);
	--c;
	return;
}

if((*ptr==0) || (tempn->rollno < tempo->rollno))
{
	tempn->next=*ptr;
	*ptr=tempn;
}
else
{
	while(tempo)
	{
		if((tempo->next==0) || (tempo->next->rollno > tempn->rollno))
		{
			tempn->next=tempo->next;
			tempo->next=tempn;
			break;
		}
	tempo=tempo->next;
	}
}
}

//..................................................END..............................................................//

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
	nd->next=*ptr;
	*ptr=nd;
}
else
{
	nd1=*ptr;
	while(nd1->next)
	nd1=nd1->next;

nd->next=nd1->next;
nd1->next=nd;
}
}

//..........................................................Begin....................................................//

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

nd->next=*ptr;
*ptr=nd;
}

//...................................................................................................................//
