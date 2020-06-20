#include<iostream>
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		int n;
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int five=0,ten=0,fifteen=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==5 && five>=0 && ten>=0)
			{
				five++;
			}
			else if(a[i]==10 && five>=0 && ten>=0)
			{
				five--;
				ten++;
			}
			else if(a[i]==15 && five>=0 && ten>=0)
			{
				if(ten>=0 && five>=2)
				{
					if(ten>0)
					{
						ten--;
						fifteen++;
					}
					else
					{
						five=five-2;
						fifteen+
						
					}
					
				}
				else if(ten>0)
				{
					
				}
			}			
		}
			int sum=0;
			if(five>=0 && ten>=0 && fifteen>=0)
			{
				sum=five*5+ten*10+fifteen*15;
				if(sum==(n*5))
				{
					printf("YES\n");
			    }
			    else
			    {
				    printf("NO\n");
			    }
			}
			else
			{
				printf("NO\n");
		    }
			
			
		}
	return 0;
}
