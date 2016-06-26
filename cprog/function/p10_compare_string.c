#include<stdio.h>
int cmp(const char *,const char *);

int main()
{
char s1[20];
char s2[20];
int i;
printf("Enter the first string \n");
	gets(s1);
printf("Enter the second string \n");
	gets(s2);
printf("\n");

puts(s1);
puts(s2);

i=cmp(s1,s2);

/*
if(i==0)
	printf("equale\n");
else if(i==1)
		printf("greater\n");
	else
		printf("less");
*/

switch(i)
{

case 1:printf("greater\n");
	break;
case 0:printf("equal\n");
	break;
case -1:printf("less\n");

}

return 0;
}

int cmp(const char *p,const char *q)
{
int i;

for(i=0;p[i];i++)
	if(p[i]!=q[i])
	break;

if(p[i]==q[i])
	return 0;
else if(p[i]>q[i])
		return 1;
	else
		return -1;
}

