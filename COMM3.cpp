#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int r,n,k,z,i,d;
		float r1,r2,r3;
		cin>>r;
		int x[3],y[3];
		for(i=0;i<3;i++)
		{
			cin>>x[i]>>y[i];
		}
		r1=sqrt( (x[1]-x[0])*(x[1]-x[0]) + (y[1]-y[0])*(y[1]-y[0]) );
		r2=sqrt( (x[2]-x[1])*(x[2]-x[1]) + (y[2]-y[1])*(y[2]-y[1]) );
		r3=sqrt( (x[2]-x[0])*(x[2]-x[0]) + (y[2]-y[0])*(y[2]-y[0]) );
		if(r1<=r && r2<=r || r1<=r && r3<=r || r2<=r && r3<=r)
		{
			cout<<"yes\n";
		}
		else
		{
			cout<<"no\n";
		}
	}
	return 0;
}
