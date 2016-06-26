#include"header.h"

//........................................save data into file................................................................//

void fsave(ST *p,char *cp)			//	save data in file..
{
FILE *fp;

	fp=fopen(cp,"w");
	do
	{
		fprintf(fp,"%u %s %f\n",p->rollno,p->name,p->mark);
		p=p->next;
	}while(p);
}
