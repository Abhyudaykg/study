#include<stdio.h>
#include<string.h>
int max(int w,int e);
int main()
{
int a,b;
int i,j,k,m=0,n=0;
a=3;
b=2;
printf("a=%d ,b=%d \n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("a=%d,b=%d \n",a,b);
char str1[]="abhy";
char str2[]="pratik";
printf("str1=%s \n",str1);
printf("str2=%s \n",str2);
int l=max(strlen(str1),strlen(str2));
printf("l=%d",l);
for(i=0;i<=l;i++)
{
m=(int)str1[i];
n=(int)str2[i];
m=m^n;
n=m^n;
m=m^n;
str1[i]=(char)m;
str2[i]=(char)n;

}
printf("str1=%s ,str2=%s \n",str1,str2);
return 0;
}
int max(int w,int e)
{
if(w==e)
{
	return w;
}
else
	{
		if(w<e)
		{
			return e;
		}
		else
		{
			return w;
		}

}
}
