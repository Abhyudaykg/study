#include<stdio.h>
struct s
{
int i;
char st[10];
float f;
}s={.st="abhyuday"},s2={.i=657};

int main()
{
//struct s s1,s2;
char *p=s.st;
printf("Enter the data\n");
scanf("%d ",&s.i);
gets(p);
scanf("%f",&s.f);

printf("\n %d \n %s \n %f \n",s.i,s.st,s.f);
printf("\n %d \n %s \n %f \n",s2.i,s2.st,s2.f);

return 0;

}
