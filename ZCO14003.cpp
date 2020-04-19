#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i,max;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		a[i]=(a[i]*(n-i));
	}
	max=a[0];
	for(i=0;i<n-1;i++)
	{
		if(max<a[i+1])
		{
			max=a[i+1];
		}
	}
	cout<<max;
return 0;
}
