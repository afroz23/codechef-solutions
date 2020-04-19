#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,test,p,x,k,a[500],c,b[500];
	cin>>test;
	while(test-->0)
	{
		int z=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				a[z++]=i;
			}
		}
		c=0;
		p=0;
		for(x=0;x<=z;x++)
		{
			for(j=2;j<=n/2;j++)
			{
				if((a[x]%j)==0)
				{
					c++;
				}
			}
		if(c==0)
		{
			b[p++]=a[x];
		}
		}
		for(i=0;i<p;i++)
		{
			cout<<a[i]<<endl;
		}
		cout<<"p: "<<(p+1)<<"\nz: "<<z;
	}
}
