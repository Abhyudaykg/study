#include<stdio.h>
#include<string.h> 
             main()
	  {
	//	char *ptr1 = "abcdef";
	
char a[]="abcdef";
char *ptr1=a;
		ptr1 = ptr1+(strlen(ptr1)-1);
		printf("%c", --*ptr1--);
		printf("%c",--*--ptr1);
		printf("%c",--*(ptr1--));
		printf("%c",--*(--ptr1));
		printf("%c",*ptr1);
	printf("\n");
	}
          
