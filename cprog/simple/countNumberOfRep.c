/*programe for count the number of repitetion of character in string*/

#include<stdio.h>
#include<string.h>
int *numberofrepitation(char *p,int length);
int array[26];
int main(void)
{
char str[]="abhyuday";
int *alphabat[25];
int l=strlen(str);
char alp[25];
char ch='a';
int e;
for(e=0;e<26;e++)
{
alp[e]=ch;
printf("alp=%c \n",alp[e]);
ch++;
}
numberofrepitation(str,l);
int y;
for(y=0;y<=26;y++)
{
printf("alphabat %c repeat %d time \n",alp[y],array[y]);
}
return 0;
}
int *numberofrepitation(char *p,int length)
{int i,j,k;
char *cha;

char ch='a';
int l=length;
for(i=0;i<26;i++)
{
cha=p;
array[i]=0;
printf("ch=%c \n",ch);
	for(j=0;j<=l;j++)	
	{
		if(ch==cha[j])
		{
		++array[i];
		}
	//printf("%c",*cha);
	
	}
ch=ch+1;
}
return array;

}
