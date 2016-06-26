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
void dlt(ST **,int);

int main()
{
ST *headptr=0;
char ch;
int num;

do
{
add_end(&headptr);
	printf("you want to add data... Y/N \n");
	scanf(" %c",&ch);
}while( ch=='y' || ch=='Y' );
print(headptr);

	printf("which number you want to delete...");
	scanf("%d",&num);

dlt(&headptr,num);
print(headptr);

return 0;
}

void dlt(ST **ptr,int num)
{
ST *temp;
temp=*ptr;
while(temp)
{
	if(temp->num==num)
	{
		if(temp->prev==0)
		{
			*ptr=temp->next;
			temp->next->prev=0;
			free(temp);
		}
		else if(temp->next==0)
			{
				temp->prev->next=0;
				free(temp);
			}
			else
			{
				temp->prev->next=temp->next;
				temp->next->prev=temp->prev;
				free(temp);
			}
	}
	else
	{
		if(temp==0)
			printf("Node is not present..\n");
	}
		temp=temp->next;
}
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


