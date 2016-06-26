#include<iostream>
using namespace std;
int a[5]={1,2,3,4,5};

int& change(int index)
{
	return a[index];
}

int main ()
{
	for(int i=0;i<5;i++)
	{
		change(i)=a[i]+1;
	}
	
	for(int i=0;i<5;i++)
	{
		cout << "a["<<i<<"]="<<a[i]<<endl;
	}



return 0;
}
