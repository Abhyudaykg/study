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
	
	A operator-()
	{
		A temp;
		temp.x=-x;
		temp.y=-y;
	return temp;
	}
};

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

