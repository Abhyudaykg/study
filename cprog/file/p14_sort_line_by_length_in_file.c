// sort the line of file according to length....
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
FILE *fp;
char ch=0;
int n=0;
int t1=0,t2=0;
char **p;
int i=0,j=0;

	if(argc!=2)
	{
		printf("ussage: ./a.out filename\n");
		return;
	}
fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("File does not exist\n");		
		return;
	}

//.........................................................................................................................//

while(ch!=EOF)					// find number of line and maximum char in one line
{	
	++n;
	while((ch=fgetc(fp))!='\n'&&ch!=EOF)
		t1++;
	if(t1>t2)
		t2=t1;
t1=0;
}
rewind(fp);
//doen
//.........................................................................................................................//

p=malloc(sizeof(char *)*n*t2);

for(i=0;i<n;i++)
{
fgets(p[i],t2,fp);
}
printf("%s\n",*p);
rewind(fp);
//........................................................................................................................//

int l1=0,l2=0;
char *temp;
for(i=0;i<=n;i++)
	for(j=0;j<=n-i-1;j++)
	{
		l1=strlen(p[j]);
		l2=strlen(p[j+1]);
		if(l2<l1)
		{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
		}
	}
fp=fopen(argv[1],"w");
for(i=0;i<=n;i++)
{
	fputs(*p,fp);
}

}
