#include<iostream>
using namespace std;

class A
{
private:
	int x;
public:
void setdata()
	{
		cout<<"Enter data of A"<<endl;
		cin>>x;
	}
friend class readd;
};

class B
{
private:
	int y;
public:
void setdata()
{
cout<<"Enter data of B"<<endl;
cin>>y;
}
friend class readd;
};

class C
{
private:
	int z;
public:
void setdata()
	{
	cout<<"Enter data of C"<<endl;
	cin>>z;
	}
friend class readd;

};

class readd
{
public:

	void display(A &ob1,B &ob2,C &ob3)
	{
		cout<< "A="<<ob1.x<<"  B="<<ob2.y<<"  C="<<ob3.z<<endl;
	}
};

int main()
{
A obj1;
B obj2;
C obj3;

obj1.setdata();
obj2.setdata();
obj3.setdata();

readd r;
	r.display(obj1,obj2,obj3);
}
