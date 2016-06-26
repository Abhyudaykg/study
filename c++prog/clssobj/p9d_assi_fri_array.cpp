#include<iostream>
using namespace std;


class A
{
private:
	int a[5];
public:
	void setarry()
	{
	cout<< "Enter the array data for A"<<endl;
		for(int i=0;i<5;i++)
			cin>>a[i];
	}
	void print()
	{
		cout<<"array of A"<<endl;
		for(int i=0;i<5;i++)
			cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
friend class C;
};
class B
{
private:
	int b[5];
public:
	void setarry()
	{
	cout<< "Enter the array data for B"<<endl;
		for(int i=0;i<5;i++)
			cin>>b[i];
	}
	void print()
	{
		cout<<"array of B"<<endl;
		for(int i=0;i<5;i++)
			cout<<"b["<<i<<"]="<<b[i]<<endl;
	}
friend class C;
};

class C
{
private:
	int c[5];
public:
	void setarry(A &a,B &b)
	{
		for(int i=0;i<5;i++)
			c[i]=a.a[i]+b.b[i];
	}
	void print()
	{
		cout<<"array of C"<<endl;
		for(int i=0;i<5;i++)
			cout<<"c["<<i<<"]="<<c[i]<<endl;
	}
};
int main()
{
A a;
B b;
C c;

a.setarry();
a.print();
cout<<endl;

b.setarry();
b.print();
cout<<endl;

c.setarry(a,b);
c.print();
cout<<endl;

return 0;
}

