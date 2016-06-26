#include<iostream>
using namespace std;
class A;
class B
{
public:

	void setdata(A &);
	void print(A &);
};


class A
{

private:
	int x,y;
public:
void setdata()
	{
		cout<< "Enter the data x and y "<< endl ;
		cin>>x>>y;
	}

	friend void B::print(A &);
};
void B::print(A &ob)
	{
		cout<<endl<<"second class"<<endl;
		cout << "x=" << ob.x << "  " << "y=" << ob.y <<endl;
	}

int main()
{
A obja;
B objb;

obja.setdata();
objb.print(obja);

cout<< "End........" <<endl;
}

