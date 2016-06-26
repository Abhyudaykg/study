#include<iostream>
using namespace std;
class B;

class A
{
private:
	int x,y;
public:

friend A sum(A &,B &);
	void setdata()
{
	cout<<"Enter the data.."<<endl;
	cin>>x>>y;
}
	void print()
{
	cout<<"x="<<x<<" y="<<y<<endl;
}
};
class B
{
private:
	int x,y;
public:
	friend A sum(A &,B &);
	void setdata()
{
	cout<<"Enter the data.."<<endl;
	cin>>x>>y;
}
	void print()
{
	cout<<"x="<<x<<" y="<<y<<endl;
}
};
A sum(A &ob1,B &ob2)
{
A ob;
ob.x=ob1.x+ob2.x;
ob.y=ob1.y+ob2.y;

return ob;
}

int main()
{
A obj;
B obj1;
A ans;

obj.setdata();
obj.print();
obj1.setdata();
obj1.print();
ans=sum(obj,obj1);

ans.print();

return 0;
}
