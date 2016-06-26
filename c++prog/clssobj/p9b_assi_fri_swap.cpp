#include<iostream>
using namespace std;

class A;
class B;

void swapd(A &,B &);
class A
{
private:
	int x;
public:
	void setdata()
	{
		cout<<"A=";
		cin>>x;
	}
	void print()
	{
		cout<<"A="<<x<<endl;
	}
friend void swapd(A &,B &);
};

class B
{
private:
	int y;
public:
	void setdata()
	{
		cout<<"B=";
		cin>>y;
	}
	void print()
	{
		cout<<"B="<<y<<endl;
	}
friend void swapd(A &,B &);
};

void swapd(A &ob1,B &ob2)
{
ob1.x=ob1.x^ob2.y;
ob2.y=ob1.x^ob2.y;
ob1.x=ob1.x^ob2.y;
}


int main()
{
A obj1;
B obj2;

cout<<"Before..."<<endl;

obj1.setdata();
obj2.setdata();

cout<<endl;
obj1.print();
obj2.print();

swapd(obj1,obj2);

cout<<endl;
cout<<"after..."<<endl;
obj1.print();
obj2.print();

return 0;
}

