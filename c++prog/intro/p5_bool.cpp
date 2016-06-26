#include<iostream>
using namespace std;
bool responce();

int main()
{
bool x;
x=true;
cout<<"x="<<x<<endl;
cout<< "size of bool="<<sizeof(bool)<<endl;

x=100;
bool status;
status=responce();

if (status==true)
	cout<<"yes...."<<endl;
else
	cout<<"no...."<<endl;

cout<<"x="<<x<<endl;

return 0;
}
bool responce()
{
	char ch;
cout<< "you want to continue....."<<endl<<"Y or N"<<endl;
cin>>ch;
if(ch=='y')
	return true;
else if(ch=='n')
	return false;
}
