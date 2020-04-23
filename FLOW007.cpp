#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,b;
		b=0;
		cin>>n;
		while(n%10==0)
		{
			n=n/10;
		}
		while(n!=0)
        {
            b=b*10+(n%10);
            n=n/10;
        }
        
		cout<<b<<endl;
	}
}
