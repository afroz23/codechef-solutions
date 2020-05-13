#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	int j,n,count1=0;
	cin>>n;
	j=n;
	while(n--)
	{
	string s;
	cin>>s;
	int l,h;
	l=0;
	h=s.length()-1;
	while(l<=h)
	{
		if(s[l]==s[h])
		{
			l++;
			h--;
		}
		else
		{
			break;
		}
	}
	if(l>=h)
	{
		count1++;
	}
}
	
	if(count1==j)
	{
		cout<<"1\n";
	}
	else
	{
		cout<<"0\n";
	}
	}
}
