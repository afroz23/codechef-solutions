#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,t,m,a1;
	cin>>t;
	while(t--)
	{   
		m=1000000007;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		a1=0;
		for(i=0;i<n;i++)
		{
			if(a[i]!=0 && (a[i]-i)>=0)
			{
				a1=(a1+(a[i]-i));
			}
		}
		cout<<a1%m<<endl;		
	}
}
