#include<stdio.h>
#include<string.h>
typedef struct student
{
int rolln;
char name[50];
float marks;
}S;
int main()
{
int n;
int i,j;
char *p;

printf("Enter the number of student you want to enter \n");
scanf("%d",&n);

S s[n];
for(i=0;i<n;i++)
{
p=s[i].name;
printf("roll_number of %d student=",i+1);
scanf(" %d",&s[i].rolln);

printf("\nname=");
scanf("%s",p);

printf("\nmarks=");
scanf(" %f",&s[i].marks);

printf("\n\n");
}

for(i=0;i<n;i++)
{
p=s[i].name;
printf("roll_number of %d student=%d",i,s[i].rolln);

printf("\nname=%s",s[i].name);

printf("\nmarks=%f",s[i].marks);

printf("\n\n");
}
return 0;
}
