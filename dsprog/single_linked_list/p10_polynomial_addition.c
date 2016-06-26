//	5x^3 + 3x^2 + 2x^1 + 10 , + ,  1x^3 + 2x^2 + 3x^1 + 20 , = 6x^3 + 5x^2 + 5x + 30 .

#include<stdio.h>
#include<stdlib.h>
typedef struct poly
{
int coef;
int pwr;
struct poly *next;
}PY;

PY *hptradd=0;

void cpoly(PY **);
void print(PY *);
void addpoly(PY **,unsigned int);

int main()
{
unsigned int n=0;
PY **headptr;
printf("How many polynomial you want to add...?\n");
scanf("%u",&n);
	headptr=(PY **)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
	cpoly(&headptr[i]);
addpoly(headptr,n);
for(i=0;i<n;i++)
	print(*headptr[i]);
printf("\n");
print(hptradd);

return 0;
}

void cpoly(PY **ptr)
{





}




void print(PY *);
void addpoly(PY **,unsigned int);
