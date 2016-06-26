#include<iostream>
using namespace std;

int sum(int x,int y=2)
{
cout<<"int int=2"<<endl;
return x+y;
}
int sum(int x)
{
cout<< "int x="<<endl;
return x;
}
int main()
{
int a=20,b=30;
sum(a,b);
//sum(a);		// ambignity..........
return 0;
}
