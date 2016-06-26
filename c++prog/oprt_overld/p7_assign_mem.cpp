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
	
	void operator=(A &);
	void print();
};
void A::print()
{
	cout << "x=" << x << "y=" << y << endl;
}
void A::operator=(A &ob)
{
	cout << " assignment operator overloading " << endl;
	x=ob.x;
	y=ob.y;
}
int main()
{
A ob1,ob2(10,20);

ob1.print();
ob2.print();

ob1=ob2;

ob1.print();
ob2.print();

return 0;
}
