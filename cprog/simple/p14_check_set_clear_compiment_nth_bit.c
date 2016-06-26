#include<stdio.h>
int main()
{
int num;
int pos;
//.................................................................................................................................................

 // check the n^th bit set or clear
printf("Enter the value=");
scanf("%d",&num);
printf("\nEnter the position you want to check=");
scanf("%d",&pos);
printf("\nyour entered \tvalue=%d and \tposition=%d \n",num,pos);

num&1<<pos?printf("bit is set \n"):printf("bit is clear \n");  // logic to check bit is set or not
num>>pos&1?printf("bit is set \n"):printf("bit is clear \n");  // logic to check bit is set or not


//.................................................................................................................................................

  // set the n^th bit
printf("Enter the value=");
scanf("%d",&num);
printf("\nEnter the position you want to set=");
scanf("%d",&pos);
printf("\nyour entered \tvalue=%d and \tposition=%d \n",num,pos);

num=num|1<<pos;  						// logic to set the bit

printf("After set the %d bit number=%d \n",pos,num);


//.................................................................................................................................................


  // clear the n^th bit
printf("Enter the value=");
scanf("%d",&num);
printf("\nEnter the position you want to clear=");
scanf("%d",&pos);
printf("\nyour entered \tvalue=%d and \tposition=%d \n",num,pos);

num=num&~(1<<pos);  						// logic to clear the bit

printf("After set the %d bit number=%d \n",pos,num);
//.................................................................................................................................................



  // compliment the n^th bit
printf("Enter the value=");
scanf("%d",&num);
printf("\nEnter the bit position you want to compliment=");
scanf("%d",&pos);
printf("\nyour entered \tvalue=%d and \tposition=%d \n",num,pos);

num=num^1<<pos;  						// logic to compliment the bit

printf("After compliment the %d bit number=%d \n",pos,num);
//.....................................................................................................................................................
return 0;
}
