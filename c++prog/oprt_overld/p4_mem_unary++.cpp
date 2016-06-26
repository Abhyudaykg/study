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
	void print();
	A operator++();
	A operator++(int);
};
A A::operator++()
{
cout<< "pree" << endl;
++x;
++y;
}
A A::operator++(int u)
{
cout<< "post " << u<<endl;
x++;
y++;
}
void A::print()
{
	cout << "x=" << x << "y=" << y <<endl;
}

int main()
{
A o1(10,20),o2;

o1.print();
o2.print();

++o1;
o1.print();
o2.print();
o1++;
o1.print();
o2.print();
return 0;
}

