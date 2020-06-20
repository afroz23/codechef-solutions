#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		string s;
		cin>>s;
		int i,x=0,y=0;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='x')
			{
				x++;
			}
			else
			{
				y++;
			}
		}
		int z,count=0;
		if(x>0 && y>0)
		{
			for(i=0;i<s.length();i++)
			{
				if(s[i]=='x' && s[i+1]=='y')
				{
					count++;
					i=i+1;
				}
				else if(s[i]=='y' && s[i+1]=='x')
				{
					count++;
					i=i+1;
				}
			}
			cout<<count<<endl;
		}
		else
		{
			cout<<"0\n";
		}
    }
}
