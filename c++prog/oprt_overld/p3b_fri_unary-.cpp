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
	void print()
	{
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
	
	friend A& operator-(A &);
	
};

A& operator-(A &o)
{
static	A temp;
temp.x=-o.x;
temp.y=-o.y;
return temp;
}
int main()
{
A o1(10,20),o2;

o1.print();
o2.print();

o2=-o1;

o1.print();
o2.print();

return 0;
}

