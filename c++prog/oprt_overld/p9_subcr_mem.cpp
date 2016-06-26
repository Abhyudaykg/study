#include<iostream>
using namespace std;

class A
{
private:
	int a[5];
public:
	A()
	{
		for(int i=0;i<5;i++)
			a[i]=i+10;
	}

int operator[](int index)
{
	return a[index];
}
};
int main()
{
A ob1;

for(int i=0;i<5;i++)
	cout<<"a["<<i<<"]="<<ob1[i]<<endl;

return 0;
}
