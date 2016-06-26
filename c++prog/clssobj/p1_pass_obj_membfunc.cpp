#include<iostream>
using namespace std;

class A
{
private:
	int x;
	int y;
public:
	void setdata(int a,int b)
	{
		x=a;
		y=b;
	}
	void print()
	{
		cout<< "x=" << x << "y=" << y <<endl;
	}
	A& sum(A& ob)
	{
	static	A obj3;
		obj3.x=x+ob.x;
		obj3.y=y+ob.y;
	return obj3;
	}
};
int main()
{
A obj1,obj2,obj3;

obj1.setdata(10,20);
obj2.setdata(11,22);


obj3=obj1.sum(obj2);

cout<< "obj1 data..."<<endl;
obj1.print();
cout<< "obj2 data..."<<endl;
obj2.print();
cout<< "obj3 data..."<<endl;
obj3.print();

cout<< "End...."<<endl;
return 0;
}
