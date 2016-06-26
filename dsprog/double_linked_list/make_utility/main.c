#include"header.h"

int main()
{
char ch;

do
{
//add_begin();
add_end();

	printf("you want to add data... Y/N \n");
	scanf(" %c",&ch);

}while( ch=='y' || ch=='Y' );

print();
//rev_print();
dlt();
print();

return 0;
}
