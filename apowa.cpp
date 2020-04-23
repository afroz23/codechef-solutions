#include<iostream>
using namespace std;
int power(int n,int m)
{
	int pow=1,i;
	for(i=1;i<=m;i++)
	{
		pow=pow*n;
	}
	return pow;
}
int main()
{
	int n,m,pow;
	cin>>n>>m;
	cout<<power(n,m);;
}
