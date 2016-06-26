#include<iostream>
using namespace std;

class bank
{
private:
	int p;
	int r;
	int n;
public:
	void setdata(int ,int, int);
private:
	int i;
public:
	void cal(bank&);
	void print(bank&);
};
void bank::setdata(int a,int b,int c)
{
p=a,r=b,n=c;
}
void bank::cal(bank& ob)
{
ob.i=(ob.p*ob.r*ob.n)/100;
}
void bank::print(bank& ob)
{
	cout<<"intrest="<<ob.i<<endl;
	cout<<"rate="<<ob.r<<endl;
}
int main()
{
int i,j,k;
bank b1;
cout<< "Enter the data..."<<endl;
cin>>i>>j>>k;
b1.setdata(i,j,k);
b1.cal(b1);
b1.print(b1);

cout<< "End" <<endl;
return 0;
}
