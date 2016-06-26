#include<iostream>
using namespace std;

class A
{
private:
	int x,y;
public:
	A(){}
	A(int a,int b):x(a),y(b)
	{}
	
	void operator()(int a,int b)
	{
		cout << "mem operator..." << endl;
		x=a,y=b;
	}
	void print()
	{
		cout << "x=" << x <<"y=" <<y <<endl;
	}
};
int main()
{
A ob1(10,20),ob2;

ob1.print();
ob2.print();

ob2(11,22);

ob1.print();
ob2.print();

}
