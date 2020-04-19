#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,i,in,ye,no;
		cin>>n;
		string a;
		cin>>a;
		in=0;
		ye=0;
		no=0;
		for(i=0;i<a.length();i++)
		{
			if(a[i]=='I')
			{
				in++;
			}
			else if(a[i]=='Y')
			{
				ye++;
			}
			else if(a[i]=='N')
			{
				no++;
			}
		}
		if(in!=0)
		{
			cout<<"INDIAN\n";
		}
		else if(ye!=0)
		{
			cout<<"NOT INDIAN\n";
		}
		else
		{
			cout<<"NOT SURE\n";
		}
	}
	return 0;
}
