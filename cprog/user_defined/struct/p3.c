#include<stdio.h>
main()
{
struct emp
{
char name[25];
int age;
float bs;
};
struct emp e;
e.name="rahul";
e.age=25;
printf("%s %d",e.name,e.age);
}
