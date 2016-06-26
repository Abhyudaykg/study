#include<iostream>
using namespace std;
void swp(int &,int &);
int main()
{
int i=9;
int j=8;

cout<<"i="<<i<<" j="<<j<<endl;
	swp(i,j);
cout<<"i="<<i<<" j="<<j<<endl;
return 0;
}
void swp(int& p,int& q)
{
p=p^q;
q=p^q;
p=p^q;
}
