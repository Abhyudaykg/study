#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;

class student
{
private:
	int rn;
	string name;
	int mark;
public:
	void setdata(student& s)
	{
		cout<<"roll no.="<<endl;
		cin>>s.rn;
		cout<<rn;
		cout<<"marks="<<endl;
		cin>>mark;
		cout<<"name="<<endl;
		cin>>name;
		cout<<endl;
	}
	void print()
	{
		cout<< "name="<<name<<" roll no.="<<rn<<" mark="<<mark<<endl;
	}
	void sort(student* s);
};
void student::sort(student* s)
{
int op;
cout<< "How you want to sort the data..."<<endl;
cout<<"1>mark"<<endl<<"2>name"<<endl<<"3>Roll no."<<endl;
cin>>op;
if(op==1)
{
for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	{
		if(s[j].mark>s[i].mark)
		{
			student temp;
			temp=s[j];
			s[j]=s[i];
			s[i]=temp;
		}
	}
}
else
{
if(op==3)
{
for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	{
		if(s[j].rn>s[i].rn)
		{
			student temp;
			temp=s[j];
			s[j]=s[i];
			s[i]=temp;
		}
	}
}
else
{
if(op==2)
{
for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	{
		if(s[j].name>s[i].name)
		{
			student temp;
			temp=s[j];
			s[j]=s[i];
			s[i]=temp;
		}
	}
}
}
}
}
int main()
{
int sn=0;
	cout<<"How many student data="<<endl;
	cin>>sn;

student *s=new student[sn];
	for(int i=0;i<sn;i++)
		s[i].setdata(s[i]);
	for(int i=0;i<sn;i++)
		s[i].print();
s[0].sort(s);
for(int i=0;i<sn;i++)
	s[i].print();

cout<<"End...."<<endl;
return 0;
}
