#include<iostream>
using namespace std;

template<class T1>
class B1
{
protected:
	T a;
public:
	B1():a(10)
	{
		cout << "B1 default...." << endl;
	}
	B1(T x):a(x)
	{
		cout << "B1 constr....." << endl;
	}
	void print()
	{
		cout << "a=" << a << endl;
	}
	~B1()
	{
		cout << "B1 destr....." << endl;
	}
};
template<class T>
class B2
{
protected:
	T b;
public:
	B2():b(20)
	{
		cout << "B2 default...." << endl;
	}
	B2(T x):b(x)
	{
		cout << "B2 constr....." << endl;
	}
	void print()
	{
		cout << "b=" << b << endl;
	}
	~B2()
	{
		cout << "B2 destr....." << endl;
	}
};
template<class T>
class B3
{
protected:
	T c;
public:
	B3():c(30)
	{
		cout << "B3 default...." << endl;
	}
	B3(T x):c(x)
	{
		cout << "B3 constr....." << endl;
	}
	void print()
	{
		cout << "c=" << c << endl;
	}
	~B3()
	{
		cout << "B3 destr....." << endl;
	}
};
template<class T>
class D1:public B1,public B2,public B3
{
private:
	T d;
public:
	D1():d(40)
	{
		cout << "D1 default....." << endl;
	}
	D1(T x,T y,T z,T k):B1(x),B2(y),B3(z),d(k)
	{
		cout <<"D1 constr..." << endl;
	}
	void print()
	{
		B1::print();
		B2::print();
		B3::print();
		cout << "d=" << d << endl;
	}
	~D1()
	{
		cout << "D1 destr..." << endl;
	}
};

int main()
{
D1 obj,obj1('A','B','C','D');

obj.print();
obj1.print();

return 0;
}


