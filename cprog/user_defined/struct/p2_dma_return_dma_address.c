#include<stdio.h>
#include<stdlib.h>
typedef struct ST
{
int i;
char ch;
float f;
}st;

st *dma(void);
void dma1(st **);
int main()
{
st *p;
st *q;

p=dma();
dma1(&q);

p->i=10;
p->ch='a';
p->f=67.9;
q->i=20;
q->ch='b';
q->f=76.9;

printf("\n%d %c %f \n",p->i,p->ch,p->f);
printf("\n%d %c %f \n",q->i,q->ch,q->f);
return 0;
}
void dma1(st **p)
{
*p=malloc(sizeof(st));
}
st *dma(void)
{
return (malloc(sizeof(st)));
}
