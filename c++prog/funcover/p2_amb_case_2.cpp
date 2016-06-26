#include<iostream>
using namespace std;

void fun(int x)
{
	cout<< "int x="<<x<<endl;
}
void fun(int &x)
{
	cout<< "int& x="<<x<<endl;
}
int main()
{
int x=11;
fun(10);

//fun(x);		// ambignity.....

}
