#include<iostream>
using namespace std;

template <class T1,class T2>
float mul(T1 &a,T2 &b)
{
cout<< "mul function " << endl;
return a*b;
}

int main()
{
float ans;
cout << "size of ans=" << sizeof ans << endl;
int x=10,y=20;
float f1=2.5,f2=1.25;
char ch1='A',ch2='B';


ans=mul(x,f1);
cout<< "ans=" << ans << endl;
cout << "size of ans=" << sizeof ans << endl;

ans=mul(x,y);
cout<< "ans=" << ans << endl;
cout << "size of ans=" << sizeof ans << endl;

ans=mul(ch1,x);
cout<< "ans=" << ans << endl;
cout << "size of ans=" << sizeof ans << endl;

ans=mul(f1,ch2);
cout<< "ans=" << ans << endl;
cout << "size of ans=" << sizeof ans << endl;

return 0;
}

