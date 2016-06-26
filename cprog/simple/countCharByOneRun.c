#include<stdio.h>
#include<string.h>
void counter(char *p,int l,int *co);
int main()
{
printf("main call \n");
char string[]="chintan";
int count[26]={0};
int length=strlen(string);
int j;
counter(string,length,count);
printf("after return from function \n");
for(j=0;j<26;j++)
{
static char ch='a';
//if(count[j]!=0)
printf("character %c repeat %d time \n",ch,count[j]);
ch=ch+1;
}
return 0;
}

void counter(char *p,int l,int *co)
{
printf("function counter call \n");
int *d;
//d=co;
long int pointeradres;
int dif;
int i;
char ch1='a';
//pointeradres=(long int)co;
	for(i=0;i<l;i++,p++)
	{
	d=co;
	if(i==0)
	printf("go for loop in function \n ");
	dif=(int)(*p)-(int)ch1;
	printf("int *p=%d, intch1=  %d \n",(int)(*p),(int)ch1);
//	*d=(pointeradres+(4*dif));
	d=d+dif;
	++(*d);
	printf("dif=%d,d= %p \n \n",dif,d);
	}
}
