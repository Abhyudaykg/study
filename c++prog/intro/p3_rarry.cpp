#include<iostream>
using namespace std;
int main()
{
int a[5]={1,2,3,4,5};
int i;

for(i=0;i<5;i++)
{
	cout<< "a["<<i<<"]="<<a[i]<<endl;
}

int (&r)[5]=a;

for(i=0;i<5;i++)
{
	cout<< "r["<<i<<"]="<< r[i]++ <<endl;
}

for(i=0;i<5;i++)
{
	cout<< "r["<<i<<"]="<< r[i]++ <<endl;
}

return 0;
}
