#include<iostream>
using namespace std;

namespace first
{
int x=1;
void fun()
{
cout<< "1st.." << endl;
}
}

namespace second
{
int x=2;
void fun()
{
cout<< "2nd.." << endl;
}
}
int main()
{
using first::fun;
fun();
//	first::fun();
//	first::fun;
//using first::fun();
/*
{
using namespace first;
	cout << "x=" << x << endl;
	fun();
}

using namespace second;
	cout << "x=" << x << endl;
	fun();
*/
/*
	cout<< "x= " << first::x << endl;
	cout<< "x= " << second::x << endl;
	cout<< "x= " << ::x << endl;
	cout<< "x= " << x << endl;
fun();
//::fun();
first::fun();
second::fun();
*/
cout<< "end" <<endl;
}
