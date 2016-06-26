#include<iostream>
using namespace std;
int main()
{
int *p;
int i=10;
int j=20;

p=&i;

int*& k=p;

cout<< " i="<<i<<" *p="<<*p<<endl;
cout<< " p="<<p<<" k="<<k<<endl;
cout<< " *k="<<*k<<endl;

k=&j;
cout<< " j="<<i<<" *p="<<*p<<endl;
cout<< " p="<<p<<" k="<<k<<endl;
cout<< " *k="<<*k<<endl;


return 0;
}
