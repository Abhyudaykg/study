#include<iostream>
using namespace std;

class A
{
public:
	int x;
	class B
	{
		public:
		int y;
	};
B ob3;
};

int main()
{
A ob1;
cout<< "Sizeof ob1:"<<sizeof ob1<<endl;
A::B ob2;
cout<< "Sizeof ob2:"<<sizeof ob2<<endl;

ob1.x=10,ob2.y=20;
cout<< "ob1.x="<<ob1.x<<endl;
cout<<"ob2.y="<<ob2.y<<endl;
cout<<"ob3.y="<<ob1.ob3.y<<endl;

return 0;
}
