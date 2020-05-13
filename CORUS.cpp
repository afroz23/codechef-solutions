#include <iostream>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		int n,q;
		scanf("%d%d",&n,&q);
	char str[n];
	scanf("%s",str);
    int i = 0, alphabet[26] = {0}, j;
    while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a';
            ++alphabet[j];
        }
      ++i;
   }
    for(int x=0;x<q;x++)
    {
    	long long int sum=0,c;
    	scanf("%lld",&c);
    	for (i = 0; i < 26; i++)
    	{
    		if(alphabet[i]-c>0)
    		{
    			sum+=alphabet[i]-c;
			}	
		}
		printf("%lld\n",sum);
	}
}
return 0;
}
