#include<iostream>
using namespace std;

class A
{
private:
	int x,y;
public:
	friend class B;
};
class B
{
public:
	void setdata(A &ob)
	{
		cout<< "Enter the data x and y "<< endl ;
		cin>>ob.x>>ob.y;
	}
	void print(A &ob)
	{
		cout<<endl<<"second class"<<endl;
		cout << "x=" << ob.x << "y=" << ob.y <<endl;
	}
};
int main()
{
A obja;
B objb;

objb.setdata(obja);
objb.print(obja);

cout<< "End........" <<endl;
}
