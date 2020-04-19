#include<iostream>
using namespace std;
int main()
{
	int i,n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%k==0)
		{
			count++;
		}
	}
	printf("%d",count);
    return 0;
}
