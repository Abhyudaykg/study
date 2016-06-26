/* Design a logic to mearge the 2 string and generate the third string in such away that third string contain allternativaly character of first and second string......*/

#include<stdio.h>
#include<string.h>
int main()
{
char s[12],s1[14];
char d[50];
int l,l1,i,j,k;
printf("Enter the first string=");
gets(s);
printf("\nEnter the second string=");
gets(s1);

printf("\n%s",s);
printf("\n%s",s1);
j=0,k=0;
for(l=0;s[l];l++);
for(l1=0;s1[l1];l1++);
for(i=0;i<l+l1+1;i++)
{
switch(i%2)
{

case 0:
	if(s[j])
	{
		d[i]=s[j];
		j++;
	}
	else
	{
		d[i]=s1[k];
		k++;
	}
	break;
case 1:
	d[i]=s1[k];
	k++;
	break;
}

}
//d[i]='\0';
printf("\n");
puts(d);

return 0;
}
