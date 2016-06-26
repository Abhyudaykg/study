#include<iostream>
using namespace std;

class A
{
static bool inflag;
public:

static A* get_intance();
void mathod();

};

bool A::inflag=false;

A* A::get_intance()
{
static A *obj;

if(!inflag)
{
cout << "aaaaaa"<< endl;
obj=new A;
inflag=true;
return obj;
}
}

void A::mathod()
{
cout << "mathod..."<<endl;
}
int main()
{
A *sc1,*sc2;
sc1=A::get_intance();
sc1->mathod();

sc2=A::get_intance();
sc2->mathod();

return 0;
}
