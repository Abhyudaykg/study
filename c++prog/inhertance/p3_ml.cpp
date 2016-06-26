#include<iostream>
using namespace std;


class A
{
protected:
	int x,y;
public:
	A():x(10),y(20)
	{
		cout << "A" << endl;
	}
	A(int a,int b):x(a),y(b)
	{
		cout << "A constr...." << endl;
	}
	void print()
	{
		cout << "x=" << x << " y=" << y << endl;
	}
	~A()
	{
		cout << "A destr...." << endl;
	}

};

class B:A
{
protected:
	int z;
public:
	B():z(30)
	{
		cout << "B" << endl;
	}
	B(int a,int b,int c):A(a,b),z(c)
	{
		cout << "B constr...." << endl;
	}
	void print()
	{
		A::print();
		cout << " z=" << z << endl;
	}
	~B()
	{
		cout << "B destr....." << endl;
	}

};

class C:B
{
protected:
	int m;
public:
	C():m(40)
	{
		cout << "C" << endl;
	}
	C(int a,int b,int c,int d):B(a,b,c),m(d)
	{
		cout << "C constr...." << endl;
	}
	void print()
	{
		B::print();
		cout << " m=" << m << endl;
	}
	~C()
	{
		cout << "C destr....." << endl;
	}
};

class D:C
{
protected:
	int n;
public:
	D():n(50)
	{
		cout << "D" << endl;
	}
	D(int a,int b,int c,int d,int e):C(a,b,c,d),n(e)
	{
		cout << "D constr...." << endl;
	}
	void print()
	{
		C::print();
		cout << " n=" << n << endl;
	}
	~D()
	{
		cout << "D destr....." << endl;
	}
};

int main()
{
D obj;

obj.print();

return 0;
}

