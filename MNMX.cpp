#include<iostream>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		int n,j,cost;
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		j=0;
		cost=0;
		for(i=0;i<n-1;i++)
		{
			if(a[j]>a[i+1])
			{
				cost+=a[i+1];
				j=i+1;
			}
			else
			{
				cost+=a[i];
				j=i;
			}
		}
		printf("%d\n",cost); 
    }
}
