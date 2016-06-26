#include<stdio.h>

void lower(char *);
void upper(char *);

int main()
{
char s[50];
int i,j,k;


printf("Enter the string \n");
gets(s);
printf("\nbefore \n");
puts(s);

printf("1>lower\n2>upper\n");
scanf("%d",&i);

switch(i)
{

case 1:
	lower(s);
	puts(s);
	break;
case 2:
	upper(s);
	puts(s);
	break;
default:
	printf("wrong entry\n");
}
return 0;
}
void lower(char *p)
{
int i;

for(i=0;p[i];i++)
{	if(p[i]==' ');
	else			
	p[i]=p[i]|1<<5;
}
}
void upper(char *p)
{
int i;
for(i=0;p[i];i++)
	if(p[i]==' ');
	else
	p[i]=p[i]&~(1<<5);
}


