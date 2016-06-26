#include<iostream>
using namespace std;

struct st
{
int x;
mutable int y;
};
int main()
{
const st var={10,20};

cout << "x=" <<var.x<<"y="<<var.y<<endl;
//var.x=1;
var.y=2;
cout << "x=" <<var.x<<"y="<<var.y<<endl;

return 0;
}
