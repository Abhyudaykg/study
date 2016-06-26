#include<stdio.h>
int main()
{
int num;
int pos;
printf("Enter the number and position \n num\tpos\n");
scanf("%d %d",&num,&pos);
int count=0;
int op;
now:
printf("what you want to do \n 1) SET\n 2) CLEAR\n 3) COMPLIMENT\n");
scanf("%d",&op);

if(op==1)
	printf("New number=%d\n",num=num|1<<pos);
else if(op==2)
	printf("New number=%d\n",num=num&~(1<<pos));
else if(op==3)
	printf("New number=%d\n",num=num^1<<pos);
else if(count<3)
{	
	count++;
	printf("you give a inproper option=%d \n so Enter correct option=",op);
	goto now;
}
else
	printf("you reach your maximum limit of try so go home and sleep \n Thanks......\n");
return 0;
}
