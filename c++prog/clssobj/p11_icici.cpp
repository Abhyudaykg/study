#include<iostream>
using namespace std;
static int id=100;

class ICICI_bank
{
private:
	string name;
	unsigned int ID;
	float bal;
public:
	ICICI_bank()
	{
	int balance;
		cout<< "Enter the data"<<endl;
		cout<<"name=";
		cin>>name;
		ID=id++;
	abc:
		cout<<endl<<"balance=";
		cin>>balance;
	if(balance>=10000)
		bal=balance;
	else
	{
		cout<< "Bhay thoda to rupya reva de mare mate....."<<endl;
		cout<<"Bhay thoda uchha upad j biji var...";
	goto abc; 
	}
	}
void print()
{
cout<<"name="<<name<<endl;
cout<<"ID="<<ID<<endl;
cout<<"Balance="<<bal<<endl;
}
};
int main()
{
ICICI_bank obj1,obj2,obj3;

obj1.print();
obj2.print();
obj3.print();
return 0;
}
