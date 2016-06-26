#include<stdio.h>
int main()
{
FILE *fp;
char a[20];

printf("Enter the file name");
scanf("%s",a);

fp=fopen(a,"r");
}
