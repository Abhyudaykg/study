/*	12)	 Write a C program to evaluate the following series. The series contains sum of
  		 square of numbers from 1 to 'n'. Strore result of each term in an array. Calculate 
		       value of  ' S '  using array.
 		        S = 1^2 + 2^2 + 3^2 + 4^2 + ------ n^2
 		          =[ 1, 4, 9, 16, -------- n^2 ]
		Suppose n = 4,
	     	  then  S =  1^2+2^2+3^2+4^2;
        	        S =  1+4+9+16;
			S =  30.
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
int n;
n=atoi(*(argv+1));
printf("n=%d \n",n);
int s[n];
int sum=0;
int i;
for(i=1;i<=n;i++)
	s[i]=i*i;

for(i=1;i<=n;i++)
	sum=sum+s[i];

printf("%d\n",sum);

return 0;
}
