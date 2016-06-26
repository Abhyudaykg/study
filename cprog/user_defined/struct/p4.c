#include<stdio.h>
struct course
{
int courseno;
char coursename[25];
};
main()
{
struct course c[]={
			{102,"t"},
			{103,"m"},
			{104,"d"}
		};
printf("%d",c[1].courseno);
printf("%s",(*(c+2)).coursename);
}
