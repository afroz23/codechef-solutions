#include<iostream>
using namespace std;
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
		long long int m,j,sum,x;
		scanf("%d%lld",&n,&m);
		sum=0;
		for(i=1;i<=((2*n)-1);i=i+2)
	    {	    
	    	j=power(m,i);
	    	x=j;
	    	m=m*j;
		    sum=sum+x;
	    }
	    printf("%lld",sum%1000000007);
    }
	return 0;
}
