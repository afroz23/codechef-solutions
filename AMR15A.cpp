#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count1,count2;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	count1=0;
	count2=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	
	if(count1>count2)
	{
		cout<<"READY FOR BATTLE\n";
	}
	else
	{
		cout<<"NOT READY\n";
	}
	return 0;
}
