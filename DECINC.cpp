#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	if(n%4==0)
	{
		a=++n;
		cout<<a;
	}
	else
	{
		b=--n;
		cout<<b;
	}
	return 0;
}
