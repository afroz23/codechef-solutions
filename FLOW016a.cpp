#include<iostream>
long long int lcm(long long int n1,long long int n2)
{
	long long int min;
	if(n1>n2)
	{
	    min=n1;
	}
	else
	{
	    min=n2;
	}
    while(1){
        if (min % n1 == 0 && min % n2 == 0){
        	return min;
            break;
        }
        ++min;
    }
}
long long int gcd(long long int a,long long int b)
{
	long long int g,i;
	for(i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			g=i;
		}
	}
	return g;
}
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",gcd(a,b),lcm(a,b));
	}
	return 0;
}
