#include<iostream>
using namespace std;

class mystr
{
private:
	char *s;
public:

friend ostream& operator<<(ostream &out,mystr &str);
friend istream& operator>>(istream &in,mystr &str);





}
friend ostream& operator<<(ostream &out,mystr &str)
{



}

friend istream& operator>>(istream &in,mystr &str)
{




}
