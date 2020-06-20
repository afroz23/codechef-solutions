#include<iostream>
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		long long int ts,i;
		int twin,jwin;
		scanf("%lld",&ts);
		twin=0;
		jwin=0;
		for(i=1;i<=ts;i++)
		{	
			if(ts%2==0)
			{
				break;			
			}
			else
			{
				if(i%2!=0)
				{
					continue;
				}
				else
				{
					jwin++;
				}
			}			
		}
		printf("%d\n",jwin);
	}
	return 0;
}


/*
#include<iostream>
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		long long int ts,i,js,twin,jwin;
		scanf("%lld",&ts);
		twin=0;
		jwin=0;
		for(i=1;i<=ts;i++)
		{	
			if(ts%2==0)
			{
				if(i%2==0)
				{
					i=i/2;
					ts=ts/2;
				}
				else
				{
					twin++;					
				}					
			}
			else
			{
				if(i%2!=0)
				{
					continue;
				}
				else
				{
					jwin++;
				}
			}			
		}
		printf("%lld\n",jwin);
	}
	return 0;
}
*/
