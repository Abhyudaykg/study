//	5x^3 + 3x^2 + 2x^1 + 10 , + ,  1x^3 + 2x^2 + 3x^1 + 20 , = 6x^3 + 5x^2 + 5x + 30 .

#include<stdio.h>
#include<stdlib.h>
typedef struct poly
{
int coaf;
int pwr;
struct poly *next;
}PY;

int main()
{




}
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
