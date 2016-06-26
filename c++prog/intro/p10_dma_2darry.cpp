#include<iostream>
using namespace std;

int main()
{
int **p;
int row,col;

	cout<<"Enter the row and column="<<endl;
	cin>>row>>col;
	cout<<"row="<<row<<endl<<"col="<<col<<endl;
p=new int *[row];

for(int i=0;i<row;i++)
{
	p[i]=new int[col];
}
int k=0;
for(int i=0;i<row;i++)
	for(int j=0;j<col;j++)
{
	p[i][j]=k++;
}
for(int i=0;i<row;i++)
	for(int j=0;j<col;j++)
{
	cout<<"p["<<i<<"]["<<j<<"]="<<p[i][j]<<endl;
}
for(int i=0;i<row;i++)
{
	delete p[i];
}
delete []p;

return 0;
}
