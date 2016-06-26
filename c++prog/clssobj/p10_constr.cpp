#include<iostream>
using namespace std;

static int i=0;
class A
{
private:
	int  x,y;
public:

	A()
	{
		cout<<"Constractore"<<endl;
		x=10,y=20;
	}
	void print()
	{
		cout<< "x=" <<x <<"  y="<<y<<endl;
	}
};
int main()
{
A obj1,obj2,obj3;
obj1.print();
obj2.print();
obj3.print();
}
