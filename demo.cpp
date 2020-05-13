#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		if(n>0)
		{
			cout<<"greater than zero"<<endl;
		}
		else if(n>10)
		{
			cout<<"Number id greater than 10"<<endl;
		}
		else if(n<0)
		{
			cout<<"number is less than 10"<<endl;
		}
		else
		{
			cout<<"Nothing"<<endl;68
		}	
    }
}
