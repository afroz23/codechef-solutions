#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int a,b;
		double ans;
		cin>>a>>b;
		if(a>1000)
		{
			ans=(a*b)-(a*b)*0.1;
		}
		else
		{
			ans=(a*b);
		}
		printf("%f\n",ans);
	}
}
