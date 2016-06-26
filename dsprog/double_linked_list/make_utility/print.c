#include"header.h"

//..................................................print()..................................................................//

void print(void)
{
ST *ptr;
ptr=headptr;

while(ptr)
{
	printf("%d\t",ptr->num);
	ptr=ptr->next;
}
printf("\n");

}

//.............................................reverse print without recursion..........................................//

void rev_print()
{
ST *ptr;
ptr=headptr;
while(ptr->next)
	ptr=ptr->next;
while(ptr)
{
	printf("%d\t",ptr->num);
	ptr=ptr->prev;
}
printf("\n");
}
//.......................................................................................................................//
