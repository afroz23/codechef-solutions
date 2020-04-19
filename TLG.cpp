#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n],b[n],c[n],sum1[n],sum2[n],l[n];
	sum1[0]=0;
	sum2[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum1[i]=sum1[i-1]+a[i];
		sum2[i]=sum2[i-1]+b[i];
		c[i]=abs(sum1[i]-sum2[i]);
		l[i]=c[i];
	}
	int max=c[1];
	for(i=2;i<=n;i++)
	{
		if(max<c[i])
		{
			max=c[i];
		}
	}
	
	
	for(i=1;i<=n;i++)
    {
    	if(l[i]==max)
    	{
    		if(a[i]>b[i])
    		{
    			cout<<"1"<<" "<<max;
    		}
    		else
    		{
    			cout<<"2"<<" "<<max;
			}
			break;
		}
	}
	return 0;
}
