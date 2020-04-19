#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int sum=0,x;
		cin>>n;
		while(n!=0)
		{
			x=n%10;
			sum+=x;
			n=n/10;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
