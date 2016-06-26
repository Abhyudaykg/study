#include<iostream>
using namespace std;

class A
{
private:
	int x,y;
public:
	A():x(1),y(2)
	{}
	A(int a,int b):x(a),y(b)
	{}
void print()
{
	cout<< "x="<<x<<"y="<<y<<endl;
}	

friend ostream& operator<<(ostream &,A &);
friend istream& operator>>(istream &,A &);

};
ostream& operator<<(ostream &out,A &ob)
{
out<<"x="<<ob.x<<"y="<<ob.y<<endl;
return out;
}
istream &operator>>(istream &in,A &ob1)
{
in>>ob1.x;
in>>ob1.y;
return in;
}
int main()
{
A o1,o2;
o1.print();
o2.print();
	cout<<o1<<o2;
	cout<< "Enter the data..."<<endl;
	cin>>o1;
	cin>>o2;
	cout<< "out put "<<endl;
	cout<<o1<<o2;
return 0;
}
