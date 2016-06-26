#include<iostream>
using namespace std;


class A
{
int x,y;
public:
A(int a ,int b):x(a),y(b)
{
cout<<"para..."<<endl;
cout<<"x="<<x<<"y="<<y<<endl;
//x=a;
//y=b;
}
A():x(10),y(20)
{
cout<<"Default...."<<endl;
//x=10;
//y=20;
}
void print()
{
cout<<"x="<<x<<"y="<<y<<endl;
}
};
int main()
{
A obj1(11,22),obj2(23,34),obj3;
obj1.print();
obj2.print();
obj3.print();






}
