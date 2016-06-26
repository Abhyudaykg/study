#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int **p;
int **q;
int **ans;

int row1,col1,row2,col2;
int ar,ac;

	cout<<"Enter the row1 and col1umn="<<endl;
	cin>>row1>>col1;
	cout<<"row1="<<row1<<endl<<"col1="<<col1<<endl;
p=new int *[row1];
for(int i=0;i<row1;i++)
	p[i]=new int[col1];
//int k=0
for(int i=0;i<row1;i++)
	for(int j=0;j<col1;j++)
	p[i][j]=1;
for(int i=0;i<row1;i++)
	for(int j=0;j<col1;j++)
		cout<<"p["<<i<<"]["<<j<<"]="<<p[i][j]<<endl;

	cout<<"Enter the row1 and col1umn="<<endl;
	cin>>row2>>col2;
	cout<<"row2="<<row2<<endl<<"col2="<<col2<<endl;
q=new int *[row2];
for(int i=0;i<row2;i++)
	q[i]=new int[col2];
//int k=0
for(int i=0;i<row2;i++)
	for(int j=0;j<col2;j++)
	q[i][j]=1;
for(int i=0;i<row2;i++)
	for(int j=0;j<col2;j++)
		cout<<"p["<<i<<"]["<<j<<"]="<<q[i][j]<<endl;

if(col1==row2)
{
ar=row1;
ac=col2;

ans=new int *[ar];
for(int i=0;i<ar;i++)
	ans[i]=new int[ac];

for(int i=0;i<ar;i++)
	for(int j=0;j<ac;j++)
{
ans[i][j]=0;
for(int n=0,m=0;n<col1;n++,m++)
{
ans[i][j]=ans[i][j]+p[i][n] * q[m][j];
}
}
for(int i=0;i<ar;i++)
	for(int j=0;j<ac;j++)
		cout<<"ans["<<i<<"]["<<j<<"]="<<ans[i][j]<<endl;
}
else
	printf("multiplication not possible\n");
return 0;
}
