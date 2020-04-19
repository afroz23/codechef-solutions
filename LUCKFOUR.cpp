#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int t,i,z;
	string s;
	cin>>t;
	while(t--)
	{   int count=0;
		cin>>s;
		z=s.length();
		for(i=0;i<z;i++)
		{
			if(s[i]=='4')
			{
				count++;
			}
		}
		cout<<count<<endl;		
	}
	return 0;
}
