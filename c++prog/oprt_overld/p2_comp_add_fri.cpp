#include<iostream>
using namespace std;
class comp
{
private:
	float real;
	float imag;
public:
	comp(){}
	comp(float a,float b):real(a),imag(b)
	{
		cout << "constructor call..." << endl;
	}

	void print()
	{	
		cout << "real=" << real <<endl;  
		cout << "imag=" << imag <<endl;
	}

	friend comp& operator+(comp & ,comp & );
};

comp& operator+(comp &ob1,comp &ob2)
{
static comp temp;

temp.real=ob1.real+ob2.real;
temp.imag=ob1.imag+ob2.imag;

return temp;
}

int main()
{
comp c1(10,20),c2(10,20),c3(10,20),c4(10,20),c5;

c1.print();
c2.print();
c3.print();
c4.print();
c5.print();

c5=c1+c2+c3+c4;
c5.print();

return 0;
}
