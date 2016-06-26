#include<stdio.h>
      int main()
      {
	int x = 256;
	char *p = &x;
	*++p = 2;
	printf("%d",x);
      }

