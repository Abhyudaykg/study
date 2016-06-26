// cant't overload by friend function...... ()
#include<iostream>
using namespace std;

class A
{
private:
	int x,y;
public:
	A(){}
	A(int m,int n):x(m),y(n)
	{}
	
friend void operator()(A &,int,int);
	void print()
	{
		cout << "x=" << x <<"y=" <<y <<endl;
	}
};
void operator()(A &ob,int a,int b)
{
	cout<< "call "<< endl;
ob.x=a;
ob.y=b;
}
int main()
{
A ob1(10,20),ob2;

ob1.print();
ob2.print();

operator()(ob2,11,22);


ob1.print();
ob2.print();

}
