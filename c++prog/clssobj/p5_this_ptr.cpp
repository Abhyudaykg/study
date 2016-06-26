#include<iostream>
using namespace std;

class A
{
private: 
	int x,y;
public:
	void setdata(int a,int b)
	{
		this->x=a,this->y=b;
	}

	A sum(A& ob2)
	{
		x=x+ob2.x;
		y=y+ob2.y;
	return *this;
	}
	void print()
	{
		cout<< "x="<<(*this).x<<"y="<<(*this).y<<endl;

	}
};
int main()
{
A ob1,ob2,ob3;
ob1.setdata(10,20);
ob2.setdata(11,22);
ob3=ob1.sum(ob2);
//ob3=ob1;
	ob1.print();
	ob2.print();
	ob3.print();

return 0;
}
