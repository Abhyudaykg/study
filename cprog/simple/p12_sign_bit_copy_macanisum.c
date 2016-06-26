/*
	here when we use '%x' for character at that time 1byte ASCII convert temperary into 4byte ASCII,here first 3byte will be full fill by sign byte so in 'sign char ch' we get output -1 and ffff ffff.but in 'unsigned char ch' we get 255 and ff.
		it is called sign bit copy macanisum because here sign bit is copy in first 3byte for %x....... 
*/
#include<stdio.h>
int main()
{
char ch;
unsigned char ch1;
ch=0xff;
ch1=0xff;
printf("%c %d %x \n",ch,ch,ch);
printf("%c %d %x \n",ch1,ch1,ch1);
return 0;
}
