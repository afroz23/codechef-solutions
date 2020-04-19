#include<iostream>
using namespace std;
int main()
{
	int i,n,x,y,t;
	cin>>t;
	while(t-->0)
	{
	cin>>n>>x>>y;
	for(i=0;i<n;i++)
	{
		if(i%x==0 && i%y!=0)
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	
}
}
