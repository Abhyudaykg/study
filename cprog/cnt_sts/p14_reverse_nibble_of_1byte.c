#include<stdio.h>
int main()
{
char ch;

printf("ch=");
scanf("%c",&ch);
printf("\n%c\n",ch);
int i;
int j;
// print the number binary
for(i=7;i>=0;i--)
	if(ch>>i&1)
		printf("1");
	else
		printf("0");
printf("\n");
// reverse the bit

for(i=4,j=0;i<8;i++,j++)
{
if((ch>>i&1)!=(ch>>j&1))
{	ch=ch^1<<i;
	ch=ch^1<<j;
}
}
// print the new bit
for(i=sizeof(char)*8-1;i>=0;i--)
	if(ch>>i&1)
		printf("1");
	else
		printf("0");

printf("\n");

return 0;
}

