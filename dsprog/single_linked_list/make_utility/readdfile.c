#include"header.h"

//...............................................read data from file ........................................................//

void readfile(ST **ptr,char *file)
{
FILE *fp;
ST v;
ST *temp;
ST *tempo;

fp=fopen(file,"r");

	while((fscanf(fp,"%d %s %f",&v.rollno,v.name,&v.mark))!=EOF)
	{
			temp=malloc(sizeof(ST));
			*temp=v;
		if(*ptr==0)
		{	
			temp->next=*ptr;
			*ptr=temp;
			tempo=temp;
		}
		else
		{
			temp->next=tempo->next;
			tempo->next=temp;
			tempo=temp;
		}		
	}
}
