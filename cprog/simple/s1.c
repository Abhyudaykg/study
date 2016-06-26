#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
char *str1;
int len;


scanf("%d",&len);
memset(str1, 0, len);
str1 = (char *)malloc(sizeof(char)*len);

if(NULL == str1) {
	printf("\nMemory Overflow");
	exit(0);
}


printf("Enter String: ");
gets(str1);


int x=strlen(str1);

int i,j,m=0,n=0;
for(i=0,j=x-1;i<=x-1,j>=0;i++,j--)
{	
	if(str1[i]==str1[j])
	m++;
	else
	{	n++;
		printf("string is not pny \n"); 
		break;
	}
}
if(m!=0) 
printf("string is penindrom \n");
return 0;
}
