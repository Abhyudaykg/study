#include"header.h"

//.......................................................M1...................................................................//

void rev_data(ST *ptr)
{
ST *temp,*temp1,v;
int i,j,c;
	c=count(ptr);
temp=ptr;

for(i=0;i<c/2;i++)
{
temp1=ptr;
	for(j=0;j<c-1-i;j++)
		temp1=temp1->next;

v.rollno=temp->rollno;
strcpy(v.name,temp->name);
temp->mark=temp1->mark;

temp1->rollno=v.rollno;
strcpy(temp1->name,v.name);
temp1->marks=v.marks;	
	temp=temp->next;
}
}

//.....................................................M2.................................................................//

void rev_data(ST *ptr)
{
ST *temp,*temp1,v;
int i,j,c;
	c=count(ptr);
temp=ptr;

for(i=0;i<c/2;i++)
{
temp1=ptr;
	for(j=0;j<c-1-i;j++)
		temp1=temp1->next;

v=*temp;
*temp=*temp1;
*temp1=v;

t=temp1->next;
temp1->next=temp->next;
temp->next=t;
	
temp=temp->next;
}
}


