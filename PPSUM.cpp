#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int d,n,ans,i;
		cin>>d>>n;
		
		while(d!=0)
		{
			ans=0;
			for(i=0;i<=n;i++)
			{
				ans+=i;
			}
			
			d--;
			n=ans;
		}
		if(d==0)
		{
			cout<<ans<<endl;
		}
	}
}


