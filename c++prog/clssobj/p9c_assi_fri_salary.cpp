#include<iostream>
using namespace std;

class H;
class W;

float total(H &,W &);
class H
{
private:
	string name;
	float salary;
public:
	
	void setdata()
	{
		cout<<"H=";
		cin>>salary;
	}
	void print()
	{
		cout<<"H="<<salary<<endl;
	}
	friend float total(H &,W &);
};

class W
{
private:
	string name;
	float salary;
public:
	void setdata()
	{
		cout<<"W=";
		cin>>salary;
	}
	void print()
	{
		cout<<"W="<<salary<<endl;
	}
	friend float total(H &,W &);
};

float total(H &h1,W &w1)
{
	return h1.salary+w1.salary;
}

int main()
{
H h;
W w;
float f;

h.setdata();
w.setdata();

h.print();
w.print();

cout<<"Total salary="<<total(h,w)<<endl;
}
