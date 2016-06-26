#include<iostream>
#include<stdio.h>
using namespace std;
int input()
{
int x;
cout<< " Enter the input"<<endl;
cin>>x;
return x;
}
int sum(int a=1,int b=input(),int c=input());
int main()
{
int ans;
int b=9;
ans=sum(1,2,3);
cout<<"ans="<<ans<<endl;


return 0;
}
int sum(int a,int b,int c)
{
return a+b+c;

}
