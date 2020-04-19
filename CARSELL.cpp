#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,t,x,z,j,sum,M,temp;
	M=1000000007;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		a[i]=a[i]%M;
	}
	
	/*
	for (i=0;i<n;i++)
	{     
    for (j=0;j<n-i;j++)
    {  
        if(a[j]<a[j+1])
        {   
            temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp; 
        }
    }
	}
	sort(a,a+n,greater<int>());	
	sum=0;
	for(x=0;x<n;x++)
	{
		if(a[x]!=0 && (a[x]-x)>=0)
		{
			sum=(sum+(a[x]-x))%M;
		}
	}
	*/
	sort(a,a+n,greater<int>());	
	sum=0;
	for(x=0;x<n;x++)
	{
		if(a[x]!=0)
		{	z=a[x]-x;
			if(z>=0)
			{
			sum=(sum+z)%M;
			}
		}
	}	
	cout<<sum<<endl;
}
    return 0;
}
