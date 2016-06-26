// add your data in this way by that the you not need to sort it after in means sort at time of adding....or add in middle.//
//...............................................headerfile...........................................................//
#include<stdio.h>
#include<stdlib.h>

//................................................structure defination................................................//

typedef struct student
{
unsigned int rollno;
char name[20];
float mark;
struct student *next;
}ST;

unsigned int c=0;
//................................................function declaration...............................................//

void display(ST *,unsigned int);	//	print the data..
void add_middle(ST **);			//	add the data....
void fsave(ST *,char *);		//	save data in file..
unsigned int countdata(unsigned int);	//	count the number of data entered
int checkdata(ST *,unsigned int);	//	Entered rollno present or not check it ....

//.....................................................main..........................................................//

main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("ussage: ./a.out Filename\n");
		return;
	}
char ch;
ST *headptr=0;

	do
	{
		add_middle(&headptr);
		printf("Do you want to add data Y/y \n");
		scanf(" %c",&ch);
		c=countdata(c);
	}while((ch=='Y') || (ch=='y'));

	display(headptr,c);
	fsave(headptr,argv[1]);
}

//..................................................function defination...................................................//

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

if(checkdata(*ptr,tempn->rollno))					// rollno  present or not check it ....
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
			//.....................................................................//

int checkdata(ST *p,unsigned int i)	//	Entered rollno present or not check it ....
{
	while(p)
	{
		if(p->rollno==i)
		{
			printf("rollno is alredy present..\n");
			return 1;
		}
	p=p->next;
	}
}
			//.....................................................................//

void fsave(ST *p,char *cp)			//	save data in file..
{
FILE *fp;

	fp=fopen(cp,"w");
	do
	{
		fprintf(fp,"%u %s %f\n",p->rollno,p->name,p->mark);
		p=p->next;
	}while(p);
}
			//....................................................................//

void display(ST *p,unsigned int c)		//	print the data..
{
unsigned int i=1;
	while(p)
	{
		printf("%u> rollno=%u\nname=%s\nmark=%f\n\n",i++,p->rollno,p->name,p->mark);
		p=p->next;
	}
printf("Total number of data=%u\n",c);
}
			//....................................................................//

unsigned int countdata(unsigned int c)	//	count the number of data entered
{
return ++c;
}
