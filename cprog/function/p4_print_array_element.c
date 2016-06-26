#include<stdio.h>
//void p_a(int *,int);
void p_a(const int *,int);
int main()
{
int a[]={10,20,30,40,50,60,70,80};
int ele,i;

ele=sizeof(a)/sizeof(a[0]);

p_a(a,ele);
printf("\n");
return 0;
}
//void p_a(int *p,int n)
void p_a(const int *p,int n)

{
int i;

for(i=0;i<n;i++)
	printf("%d\t",*p++);//p is change after complition of function
//	printf("%d\t",p[i]);//p is not change after complition of loop
}
