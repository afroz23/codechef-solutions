#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,c;
		cin>>n;
		c=5;
		while(n/c!=0)
		{
			sum=sum+(n/c);
			c*=5;
		}
		cout<<sum<<endl;
	}
}
