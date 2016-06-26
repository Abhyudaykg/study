#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
struct student *prev;
int num;
struct student *next;
}ST;

void add_begin(ST **);
void rev_print(ST *);

int main()
{
ST *headptr=0;
char ch;
do
{
add_begin(&headptr);
	printf("you want to add data... Y/N \n");
	scanf(" %c",&ch);
}while( ch=='y' || ch=='Y' );
rev_print(headptr);

return 0;
}

void add_begin(ST **ptr)
{
ST *tn;
ST *to;
to=*ptr;

	tn=calloc(1,sizeof(ST));
	printf("Enter data num=");
	scanf("%d",&tn->num);

if(*ptr==0)
	{
		tn->prev=tn->next=0;
		*ptr=tn;
	}
else
	{
		tn->next=*ptr;
		to->prev=tn;
		tn->prev=0;
		*ptr=tn;	
	}
}

void rev_print(ST *ptr)
{
while(ptr->next)
	ptr=ptr->next;
while(ptr)
{
	printf("%d\t",ptr->num);
	ptr=ptr->prev;
}
printf("\n");
}
