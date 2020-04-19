
#include<iostream>
using namespace std;
#define max 1000 
int res[max]; 
int rs,x,i; 
void multiply(int x) 
{   
    int i,c = 0;
    for (i=0; i<rs; i++){ 
        int pro=res[i]*x+c; 
        res[i]=pro%10; 
        c=pro/10;     
    }
    while (c){ 
        res[rs] = c%10; 
        c = c/10; 
        rs++; 
    }
} 

void factorial(int n){     
    res[0] = 1; 
    rs = 1; 
    for (x=2; x<=n; x++){
        multiply(x);  
    }
    for(i=rs-1; i>=0; i--){ 
        cout<<res[i]; 
    }
}

int main() 
{  int t;
cin>>t;
	while(t-->0)
	{
    int n;
    cin>>n;
    factorial(n);
	cout<<endl; 
}
} 
