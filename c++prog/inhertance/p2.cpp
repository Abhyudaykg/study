#include<iostream>
using namespace std;

class A
{
protected:
	int x,y;
public:
	A(int a,int b):x(a),y(b)
	{
		cout<< "constructror A "<< endl;
	}
	void print()
	{
		cout<< "x="<<x<<" y=" << y<<endl;
	}
	~A()
	{
		cout<< "A desrtu...."<<endl;
	}
};

class B: A
{
int z;
public:
	B(int a,int b,int c):A(a,b),z(c)
	{
		cout<< "constructor B " << endl;
	}
	void print()
	{

		A::print();
		cout<< " z="<<z<<endl;
	}
	~B()
	{
		cout<< "B destru..." << endl;
	}

};
int main()
{
A a(10,20);
B b(11,22,33);
cout<< "sizeof a:"<<sizeof a<< endl;
cout<< "sizeof b:"<<sizeof b<< endl;

a.print();
b.print();

return 0;
}
