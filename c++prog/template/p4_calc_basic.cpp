#include<iostream>
using namespace std;

template <class T1,class T2,class T3>
void calc(T1 &a,T2 b,T3 &c)
{
switch(b)
{
case '+':
		cout << a << b << c << "=" << a+c << endl;
		break;

case '-':
		cout << a << b << c << "=" << a-c << endl;
		break;

case '/':
		cout << a << b << c << "=" << a/c << endl;
		break;
case '*':
		cout << a << b << c << "=" << a*c << endl;
		break;

default:	cout<<"Invalid option " << endl;
		
}
}
int main()
{
int a=10,b=20;
float f1=2.4,f2=3.9;

calc(a,'+',f1);
calc(f2,'-',f1);
calc(b,'/',f1);
calc(a,'*',f1);

return 0;
}





