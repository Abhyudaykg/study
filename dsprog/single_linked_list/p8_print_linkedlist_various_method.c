#include"header.h"

//................................................print.....................................................................//

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

//.........................................................................................................................//
//	print using recursion    //

void print_rec(ST *p)
{
	if(p)
	{
		printf("%d %s %f\n",p->rollno,p->name,p->mark);
		print_rec(p->next);
	}
}

//...........................................................................................................................//
//	print revers by recursion	//

void print_rec_rev(ST *p)
{
	if(p)
	{
		print_rec(p->next);
		printf("%d %s %f\n",p->rollno,p->name,p->mark);
	}
}

//...........................................................................................................................//
//	print revers without recursion	//
void print_rev(ST *p)
{
//..........................................................M1...............................................................//
/*							//first method
ST *temp;
int c,i,j;
	c=count(p);
for(i=0;i<c;i++)
{
temp=p;
	for(j=0;j<c-1-i;j++)
		temp=temp->next;

printf("%d %s %f\n",temp->rollno,temp->name,temp->mark);
}
*/
//..........................................................M2.............................................................//

ST *temp;
ST **q;
int i,j,c;
	c=count(p);
q=malloc(sizeof(ST *)*c);
temp=p;
for(i=0;i<c;i++)
{
	q[i]=temp;
	temp=temp->next;
}
for(i=c-1;i>=0;i--)
{
printf("%d %s %f\n",q[i]->rollno,q[i]->name,q[i]->mark);
}
}
