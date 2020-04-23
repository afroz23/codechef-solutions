#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(10);
	for(int i=0;i<10;i++)
	{
		cin>>v[i];
	}
	 
	v.push_back(100);
	
	
	for(int i=0;i<=10;i++)
	{
		cout<<v[i]<<"  ";
	}
	


}
