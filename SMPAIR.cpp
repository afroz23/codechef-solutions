#include<iostream>
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		int n,i,j,min,x;
		scanf("%d",&n);
		int a[n];
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		min=a[1]+a[2];
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				x=(a[i]+a[j]);
				if(x<=min)
				{
					min=x;
				}
		    }
		}
		printf("%d\n",min);
	}
	return 0;
}
