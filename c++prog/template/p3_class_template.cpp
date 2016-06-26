#include<iostream>
using namespace std;

template<class T1,class T2>
class A
{
private:
	T1 x;
	T2 y;
public:
	A(T1 a,T2 b):x(a),y(b)
	{
	}
	void print();
};
template<class T1,class T2>
void A<T1,T2>::print()
	{
		cout << "x=" << x << " y=" << y << endl;
	}

int main()
{
A <int,char>obj1(10,'B');
A <char,float>obj2('A',9.6);
A <float,int>obj3(1.5,43);

obj1.print();
obj2.print();
obj3.print();

return 0;
}

