#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,i,j,flore,a,b,c;
		cin>>n>>q;
		a=0;
		flore=0;
		for(i=0;i<q;i++)
		{
			cin>>b>>c;
			flore+=abs(b-a);
			flore+=abs(c-b);
			a=c;									
		}
		cout<<flore<<endl;
	}
return 0;
}
