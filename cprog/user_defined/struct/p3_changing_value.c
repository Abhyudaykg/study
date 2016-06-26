#include<stdio.h>
typedef struct ST
{
int i;
char ch;
float f;
}st;

st a={2,'a',3.5};

void call(st *);
void call1(st **);

int main()
{
st b={3,'b',4.5};
st *p;
p=&b;

printf("\n%d %c %f\n",p->i,p->ch,p->f);
call(p);
//call1(&p);
printf("\n%d %c %f\n",p->i,p->ch,p->f);
return 0;
}
void call1(st **p)
{
*p=&a;
}
void call(st *p)
{
p=&a;
}

