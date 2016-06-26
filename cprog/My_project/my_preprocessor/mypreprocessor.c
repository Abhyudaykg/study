#include<stdio.h>
#include<stdlib.h>
#include<string.h>

unsigned int fchrmaxline(char *);
unsigned int fsize(char *);
void faddheader(char *,char *);


int main(int argc,char **argv)
{
	if(argc!=2)						// check user give correct input or not....
	{
		printf("ussage: ./a.out Filename\ntry again...\n");
		return;
	}
//...............................................................................................................................//

char *p;
int i=0;
int c=0;
p=(char *)argv[1];
//printf("%u %u %s \n",p,argv[1],p);
while(*p)							// check that the file is .c or not....
{
	if(*p=='.')
		if(*++p=='c')
			if(*++p=='\0')
			{
				c=1;
				break;
			}
	p++;
}
if(c!=1)
{
	printf("You need to pass .c file...\ntry again..\n");
	return;
}
//...............................................................................................................................//

FILE *fc;							// filepointer for .c file........
fc=fopen(argv[1],"r");						// open .c file in read mode....
perror("fopen");
	if(fc==0)						// check that the file is exist or not.....
	{
		printf("File does not exist..\n");
		printf("chech filename is correct or not...\n");
		return;
	}
//...............................................................................................................................//
								// creat .i file.....
FILE *fi;
char *d;
i=0;
c=0;
i=strlen(argv[1]);

d=malloc(i+1);
p=(char *)argv[1];

while(*p)
{
	if(*p=='.')
	{	
		d[c]=*p;
		c++;
		if(*++p=='c')
			d[c]='i';
	}
	else
		d[c]=*p;					// copy the file name in d[]...
p++;
c++;
}
d[c]='\0';
fi=fopen(d,"w");						// open .i file in write mode so it will created....
perror("fopen");
fclose(fi);
fclose(fc);

//...........................................................................................................................//
faddheader(argv[1],d);						// header files added....
perror("faddheader");



}
//.......................................................Main_End............................................................//


//...................................................Function................................................................//


void faddheader(char *s,char *d)
{
int i=0,j=0,k,l;

l=fchrmaxline(s)+1;						// get maximum number of character in one line of file....
//perror("fchrmaxline");

char st[l];							// line copy in this string.....
char *sc="#include";
char *si,ch;
FILE *fh,*fi,*fp;
char ss[20]="/usr/include/";
char str[100];

	fp=fopen(s,"r");					// open the .c file in read mode...
	perror("fopen");
while((fgets(st,l,fp))!=NULL)					// loop for find #include pre-processor keyword...and get line from file...
{
printf("l1\n");
	if(strstr(st,sc))					// check that the  #include is in line present or not..... 
	{
		i=0;
		j=0;
		while(st[i]==sc[i++]);
		--i;
		si=malloc(strlen(st)+1);
		perror("malloc");
		if(st[i]=='"')
		{
			while((ch=st[++i])!='"')
			si[j++]=ch;
			si[j]='\0';
		fh=fopen(si,"r");
		perror("fopen");

		if(fh==0)
		{
		strcat(ss,si);
		fh=fopen(ss,"r");
		}
		fi=fopen(d,"a");
		
		int ll=20;
			while((fgets(str,ll+2,fh))!=NULL)
				fprintf(fi,"%s\n",str);
		
		}

		else if(st[i]=='<')
		{
			while((ch=st[++i])!='>')
				si[j++]=ch;
			si[j]='\0';
		strcat(ss,si);
		fh=fopen(ss,"r");
		fi=fopen(d,"a");
		
		int ll=fchrmaxline(ss)+1;
			while((fgets(str,ll+2,fh))!=NULL)
				fprintf(fi,"%s\n",str);
		
		}
	fclose(fh);
	fclose(fi);
	}
}
printf("end\n");
}

//.............................................................................................................................//
unsigned int fchrmaxline(char *s)			// function for count maximum character in one line....
{
FILE *fp;
	fp=fopen(s,"r");

unsigned int cl=0,cm=0,cr=0;
int l=0;
char ch=0;
while(ch!=EOF)
{	l++;
        while((ch=fgetc(fp))!='\n'&&ch!=EOF)
                cl++;
        if(cl>cm)
	{
		cr=l;
		cm=cl;
	}

cl=0;
}
printf("cm=%d\n",cm);
return cm;
}

unsigned int fsize(char *s)
{
FILE *fp;
char ch;
unsigned int c=0;
	fp=fopen(s,"r");
while((ch=fgetc(fp))!=EOF)
	c++;
return c;
}
//.............................................................................................................................//
