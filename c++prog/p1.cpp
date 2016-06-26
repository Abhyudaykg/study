#include<iostream>
using namespace std;

class A
{
int x,y;
public:
static int c1;
A *p;

A()
{
cout<<"defult"<<endl;
++c1;
if(c1==1)
{
x=10;
y=20;
p=this;
}

else
{
x=p->x;
y=p->y;
}
}

A(int a,int b)
{
cout<< "para"<<endl;
++c1;
x=a;
y=b;
p=this;
}

void print()
{
cout << "x=" << this->x << " y=" << this->y << endl;
}

};

int A::c1=0;

main()
{
A obj1(),obj2(),obj3(11,22),obj4(),obj5(33,44);

obj1.print();
obj2.print();
obj3.print();
obj4.print();
obj5.print();

}
