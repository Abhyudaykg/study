#include<stdio.h>
int main()
{
int p;

printf("Enter the percentage=");
scanf("%d",&p);

if(p>100||p<0)
{	
printf("invalied entry");

}
else
{
if(p>74)
	printf("\nA\n");
else
if(p>59)
	printf("\nB\n");
else
if(p>44)
	printf("\nC\n");
else
	printf("FAIL thyo dofa \n");

}
return 0;
}
