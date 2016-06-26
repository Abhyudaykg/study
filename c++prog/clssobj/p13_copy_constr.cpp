#include<iostream>
using namespace std;

class A
{
private:
	int x,y;
public:
	A(A obj):x(obj.x),y(obj.y)
	{
		cout<<"copy expli call...."<<endl;
	// this->x=obj.x
	// this->y=obj.y
	}



}

int main()
{
A obj1(15,25);
A obj2=obj1;

obj1.print();
obj2.print();
return 0;
}
