#include<stdio.h>
int main()
{
int k=35;
printf("\n %d %d %d ",k==35,k=50,k>40);  // run left to right
k=- -2;	/*	{refrense
			+ -x = -x
			+ +x = +x
			- -x = +x
			- +x = -x
		}	*/
printf("\n %d ",k);


return 0;
}
