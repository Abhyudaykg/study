#include<iostream>
using namespace std;

class A
{
private:
	int x,y;
};

class B:A
{
int z;
};
int main()
{
A a;
B b;
cout<< "sizeof a:"<<sizeof a<< endl;
cout<< "sizeof b:"<<sizeof b<< endl;

return 0;
}
