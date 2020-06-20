#include<iostream>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		int n,k,i;
		scanf("%d%d",&n,&k);
		int a[n],sum1=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum1=sum1+a[i];
		}
		int flag=0,sum2=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>k)
			{
				sum2=sum2+k;
			}
			else if(a[i]<=k)
			{
				sum2=sum2+a[i];
				flag++;
			}
		}
		if(flag==k)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n",(sum1-sum2));
		}
	}
}
