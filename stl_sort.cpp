#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	a.push_back(40);
	a.push_back(30);
	a.push_back(20);
	a.push_back(10);
	int k;
	cin>>k;
	int b[k];
	for(int j=0;j<k;j++)
	{
		cin>>b[j];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
	{
	cout<<a[i]<<" ";
	}
}
