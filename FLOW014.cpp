#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test-->0)
	{
		int h,t;
		float c;
		cin>>h>>c>>t; //608009 
		if( (h>50) && (c<0.7) && (t>5600) )
		{
			cout<<"10\n";
		}
		else if((h>50) && (c<0.7))
		{
			cout<<"9\n";
		}
		else if(c<0.7 && t>5600)
		{
			cout<<"8\n";
		}
		else if(h>50 && t>5600)
		{
			cout<<"7\n";
		}
		else if(h>50 || c<0.7 || t>5600)
		{
			cout<<"6\n";
		}
		else
		{
			cout<<"5\n";
		}
		
	}
	return 0;
}
