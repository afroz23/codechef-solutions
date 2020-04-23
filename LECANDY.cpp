#include<iostream>
using namespace std;
int main()
{
	int t=0,i;
	cin>>t;
	while(t--)
	{
	int c=0,n=0;
	cin>>n>>c;
	long long int sum=0,a[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	sum=sum+a[i];
	}
	if(sum<=c)
    	cout<<"Yes\n";
	else
		cout<<"No\n";
	}
return 0;
}
