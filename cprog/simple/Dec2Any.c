#include<stdio.h>
int Dec2Any(int temp,int base);
int main()
{

int decimal;
int base;
printf("Enter the Decimal number");
scanf("%d",&decimal);
printf("decimal=%d \n",decimal);

printf("You want to convert Decimal into Binary,Hexadecimal,Octal or BCD enter 2,16,8,10 respectively");
scanf("%d",&base);
printf("Base=%d \n",base);

Dec2Any(decimal,base);

return 0;

}

int Dec2Any(int temp,int base)
{
int rm;
	if(temp <= 0)
        	return;

        rm=temp%base;
        temp=temp/base;
if(base==16)
{
        Dec2Any(temp,rm);
        if(rm > 9)
        {
		rm=((int)'A')+(rm-10);
		printf("%c",rm);
        }
        else
        	printf("%d",rm);
}

if(base==2)
{
	Dec2Any(temp,base);
	printf("%d",rm);
}

if(base==8)
{
	Dec2Any(temp,base);
	printf("%d",rm);

}

if(base==10)	
{
temp=rm;
base=2;
Dec2Any(temp,base);
	
}
return rm;

}
                                                                                                                                                
       
