#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,k,z,i,d;
		cin>>n>>k;
		d=0;
		for(i=2;i<=k;i++)
		{
			if(d<n%i)
			{
				d=n%i;
			}
		}
		cout<<d<<endl;
	}
	return 0;
}
