#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	while(k--)
	{
		string s;
		cin>>s;
		if(s=="CLICK")
		{
			cin>>n;
			cout<<n<<endl;
		}
		else
		{
			if(s=="CLOSEALL")
			{
				cout<<"0"<<endl;
			}
		}
	}
}
