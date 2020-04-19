#include<iostream>
using namespace std;
int main()
{
	int x,y,k,n,z,i,t;
	cin>>t;
	while(t--)
	{
	int l=0,m=0;
	cin>>x>>y>>k>>n;
	z=x-y;
	int p[n],c[n];
	for(i=0;i<n;i++)
	{
		cin>>p[i]>>c[i];
		if(p[i]>=z && c[i]<=k)
		{
			l++;
		}
		else
			m++;
}
		if(l>0 || m>0 && l>0)
		{
			cout<<"LuckyChef\n";
		}
		else
			cout<<"UnluckyChef\n";
	
	
	}
}
