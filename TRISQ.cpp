#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,ans;
		cin>>n;
		ans=0;
		while(n>2)
		{
			ans+=(n-2)/2;
			n=n-2;			
		}
		cout<<ans<<endl;
	}
}
