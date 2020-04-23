#include<iostream>
using namespace std;
#define mod 1000000007
long long int power(int n,int m)
{
   long long int pow=1,i;
	for(i=1;i<=m;i++)
	{
		pow=pow*n;
	}
	return pow;	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		int m,j,sum,x;
		scanf("%d%d",&n,&m);
		sum=0;
		for(i=1;i<=((2*n)-1);i=i+2)
	    {	    
	    	j=power(m,i);
	    	x=j%mod;
	    	m=m*j%mod;
		    sum=(sum+x)%mod;
	    }
	    printf("%d",sum%mod);
    }
	return 0;
}
