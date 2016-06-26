#include<iostream>
using namespace std;

class A
{
private:
	int x,y;
public:
	A(){}
	A(int a,int b):x(a),y(b)
	{}
void print()
{
	cout<< "x="<<x<<"y="<<y<<endl;
}	

friend ostream& operator<<(ostream &,A &);

};
ostream& operator<<(ostream &out,A &ob)
{
out<<"x="<<ob.x<<"y="<<ob.y<<endl;
return out;
}
int main()
{
A o1(10,20),o2(11,22);
o1.print();
o2.print();
	cout<<o1<<o2;
return 0;
}
