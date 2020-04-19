#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int i,j,count,min,max;
		string s1,s2;
		max=s1.length();
		cin>>s1>>s2;
		max=0;
		min=0;
		count=0;
		for(i=0;i<s1.length();i++)
		{
			for(j=0;j<s2.length();j++)
			{
				if(s1[i]!=s2[j])
				{
					count++;
				}
				else if(s1[i]=='?' && s2[j]=='?')
				{
					min++;
				}
			}
			if(count==s2.length())
			{
				max++;
			}	
		}
		cout<<max<<"   "<<min<<endl;
	}
	return 0;
}
