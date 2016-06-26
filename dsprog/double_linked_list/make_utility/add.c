#include"header.h"

//.....................................................add_begin.............................................................//

void add_begin(void)
{
ST *tn;
ST *to;
to=headptr;

	tn=calloc(1,sizeof(ST));
	printf("Enter data num=");
	scanf("%d",&tn->num);

if(headptr==0)
	{
		tn->prev=tn->next=0;
		headptr=tn;
	}
else
	{
		tn->next=headptr;
		to->prev=tn;
		tn->prev=0;
		headptr=tn;	
	}
}

//.....................................................add_end..............................................................//

void add_end(void)
{
ST *tn;
ST *to;
to=headptr;

	tn=calloc(1,sizeof(ST));
	printf("Enter data num=");
	scanf("%d",&tn->num);

if(headptr==0)
	{
		tn->prev=tn->next=0;
		headptr=tn;
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

//...........................................................................................................................//
