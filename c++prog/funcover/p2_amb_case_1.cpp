#include<iostream>
using namespace std;

void fun(float f)
{
	cout<< "float fun"<<endl;
}
void fun(double d)
{
	cout<< "double fun"<<endl;
}

int main()
{

	fun(4.5);
	fun(23.8f);
//	fun(2);	// ambignity.....

return 0;
}
