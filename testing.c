#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x;
		scanf("%d",&n);
		while(n!=0)
		{
			x=n%10;
			printf("%d",x);
			n=n/10;
		}
		printf("\n");
	}
	return 0;
}


