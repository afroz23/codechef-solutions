#include<iostream>
using namespace std;
int main()
{
	float n,z;
	int x;
	cin>>x>>n;
	if(x%5==0)
	{
		z=n-x-0.5;
		if(z>=0)
		{
			printf("%0.2f",z);
		}
		else
		{
			printf("%0.2f",n);
		}	
	}
	else
	{
		printf("%0.2f",n);
	}	
	return 0;
}
