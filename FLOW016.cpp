#include<iostream>
using namespace std;
int main()
{
	int t,pro,p;
	cin>>t;
	while(t-->0)
	{
		int n,i,j,k,count;
		pro=1;
		int a[2];
		for(i=0;i<2;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<=1000;i++)
		{
			count=0;
			for(j=0;j<2;j++)
			{
				if(a[j]%i==0)
				{
					count++;
				}
		    }
		    if(count==2)
		    {
		    	k=i;
			}
			if((a[0]%i==0) && ((a[1]%i)==0) && i<a[0] && i<a[1])
			{
				pro=pro*i;
			}
		}
	
	cout<<k<<" "<<pro<<endl;
}
}
