#include<stdio.h>
main()
{
union{
	struct{
		char c[2];
		char ch[2];
		}s;
	struct{
		short int i;
		short int j;
		}st;
	}u={12,1,15,1};
printf("%d %d \n",u.st.i,u.st.j);
}
