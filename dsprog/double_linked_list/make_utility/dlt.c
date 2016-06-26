#include"header.h"

//............................................................................................................................//

void dlt(void)
{
ST *temp;
temp=headptr;
int num;

	printf("which num you want to delete...");
	scanf("%d",&num);

while(temp)
{
	if(temp->num==num)
	{
		if(temp->prev==0)
		{
			headptr=temp->next;
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
//........................................................................................................................//
