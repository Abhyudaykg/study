/*	13)	 Write a C program to implement the stack using array.....
*/

#include<stdio.h>
void push(int);
int pop(void);
int stack[10];
int *p=stack;

int main()
{
push(1);
push(2);
push(3);
printf("%d\n",pop());
printf("%d\n",pop());
printf("%d\n",pop());
return 0;
}
void push(int num)
{
*p=num;
p++;
}
int pop(void)
{
p--;
return *p;
}
