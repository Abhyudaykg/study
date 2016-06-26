#include<iostream>
using namespace std;
template<class T>
void swp(T &a,T &b)
{
T temp;
cout<< "a="<<a<< " b=" <<b<<endl;
cout << "sizeof temp ="<<sizeof temp <<endl;
temp=a;
a=b;
b=temp;
cout<< "a="<<a<< " b=" <<b<<endl;
}
int main()
{
int i1=1,i2=2;
char ch1='a',ch2='b';
float f1=2.9,f2=4.5;

swp(i2,i1);
swp(f1,f2);
swp(ch1,ch2);

return 0;
}

