#include <stdio.h>
        int main()
        {
            int a = 1, b = 2, c = 3;
            int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;
//printf("a=%u b=%u c=%u ptr1=%u ptr2=%u ptr3=%u \n",&a,&b,&c,&ptr1,&ptr2,&ptr3);	
	    int **sptr=&ptr1;
//printf("a=%u b=%u c=%u ptr1=%u ptr2=%u ptr3=%u sptr=%u \n",&a,&b,&c,&ptr1,&ptr2,&ptr3,*sptr);	
	printf("%d  ",**sptr);
            *sptr = ptr2;
//printf("a=%u b=%u c=%u ptr1=%u ptr2=%u ptr3=%u sptr=%u \n",&a,&b,&c,&ptr1,&ptr2,&ptr3,*sptr);	
	    printf("%d  ",**sptr);
printf("\n");        
}

