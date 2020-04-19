#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,j,c;
		cin>>n;
		c=0;
		for(j=2;j<=n/2;j++)
			{ 
				if((n%j)==0)
				{
			  		c++;
				}
			}
		if(c==0)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
}
