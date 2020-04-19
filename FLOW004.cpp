#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int t,z;
	string s,x,y;
	cin>>t;
	while(t--)
	{   
		cin>>s;
		z=s.length();
		x=s[0];
		y=s[z-1];
		stringstream geek(s);
		stringstream gee(y);
		int a,b;
		geek>>a;
		gee>>b;
		cout<<a+b<<endl;
		//cout<<z<<endl;		
	}
	return 0;
}
