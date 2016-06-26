#include<stdio.h>
       main()
       {
	char a[]="abcde";
	char *p=a;
	p++;
	p++;
	p[2]='z';
	printf("%s",p);
       }

