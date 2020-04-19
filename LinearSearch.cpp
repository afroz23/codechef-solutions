#include<iostream>
using namespace std;
int main()
{
	int n,m,i,count=0;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			count=i;
		}
	}
	if(count==0)
	{
		cout<<"-1";
	}
	else
	{
		cout<<count+1;
	}
	return 0;
}
