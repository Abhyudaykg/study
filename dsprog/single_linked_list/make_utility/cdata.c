#include"header.h"

//...............................................checkdata...................................................................//

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

//..........................................................................................................................//
