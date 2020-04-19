#include<iostream>
using namespace std;
int main()
{
	int i,j,n,count,t;
	cin>>t;
	while(t-->0)
	{
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	count=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			count++;
		}
	}
	cout<<count;
}
return 0;
}
