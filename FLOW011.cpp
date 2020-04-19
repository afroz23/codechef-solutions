#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int s;
		double ans;
		cin>>s;
		if(s<1500)
		{
			ans=s+s*0.1+s*0.9;
		}
		else if(s>=1500)
		{
			ans=s+500+s*0.98;
		}
		printf("%f\n",ans);
	}
}
