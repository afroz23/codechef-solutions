#include <iostream>
using namespace std;
int main()
{
	long long int t,count;
    cin>>t;
    while(t-->0)
    {
    	long long int n,a,b,d,e,f,g;
    	cin>>n;
    	
		a=n/100;
		b=(n%100)/50;
		d=((n%100)%50)/10;
    	e=((((n%100)%50)%10)/5);
    	f=(((((n%100)%50)%10)%5)/2);
		g=(((((n%100)%50)%10)%5)%2)/1;
		cout<<a+b+d+e+f+g<<endl;
	}	
	return 0;
}
