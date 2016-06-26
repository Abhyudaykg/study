#include<iostream>
using namespace std;
class A
{
private:
	int x,y;

friend void setdata(A &);
friend void print(A &);
};
void setdata(A &ob)
{
	cout<< "Enter the data.."<<endl;
	cin >> ob.x >> ob.y;
}
void print(A &ob)
{
	cout<< "x="<<ob.x<<" y="<<ob.y<<endl;
}


int main()
{
A obj;

setdata(obj);
print(obj);

return 0;
}
