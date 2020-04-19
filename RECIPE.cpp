#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,i,j,k,count;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<=1000;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(a[j]%i==0)
				{
					count++;
				}
		    }
		    if(count==n)
		    {
		    	k=i;
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<(a[i]/k)<<" ";
		}
		cout<<endl;
		
	}
}
