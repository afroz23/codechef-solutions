#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		int i,j,k;
		k=1;
		if(n%2==0)
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					for(k=1;k<=n*n;k++)
					{
						if((i+j)==n+1)
						{
							if(k%2==0)
							{
								cout<<k<<" ";
							}
						}
						else if((i+j)%2==0)
						{
							if(k%2!=0)
							{
								cout<<k<<" ";
							}
						}
						else
						{
							cout<<k<<" ";
						}
						
					}
				}
			cout<<endl;
			}
        }
    }
}
