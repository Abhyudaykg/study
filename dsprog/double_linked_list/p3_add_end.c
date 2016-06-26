#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
struct student *prev;
int num;
struct student *next;
}ST;

void add_end(ST **);
void print(ST *);

int main()
{
ST *headptr=0;
char ch;
do
{
add_end(&headptr);
	printf("you want to add data... Y/N \n");
	scanf(" %c",&ch);
}while( ch=='y' || ch=='Y' );
print(headptr);

return 0;
}

void add_end(ST **ptr)
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
		tn->next=0;
		while(to->next)
			to=to->next;
		tn->prev=to;
		to->next=tn;
	}
}

void print(ST *ptr)
{
while(ptr)
{
	printf("%d\t",ptr->num);
	ptr=ptr->next;
}
printf("\n");
}

