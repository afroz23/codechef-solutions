#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,mincnt,cnt1=1,maxcnt=1,cnt2=1;
        cin>>N;
        int a[N];
        mincnt=N;
        for(int i=0;i<N;i++)
        {
         cin>>a[i];
        }
        for(int i=0;i<N;i++)
        {
            if((a[i+1]-a[i])<=2)
            {
                cnt1++;
            }
            else if((a[i+1]-a[i]>2))
            {
                if(mincnt>cnt1)
                {
                    mincnt=cnt1;
                }
                cnt1=1;
            }
        }
       // if(mincnt>cnt1)
         //   mincnt=cnt1;

      for(int i=0;i<N;i++)
        {
            if((a[i+1]-a[i])<=2)
            {
                cnt2++;
            }
            else if((a[i+1]-a[i]>2))
            {
                if(maxcnt<cnt2)
                {
                    maxcnt=cnt2;
                }
                 cnt2=1;
            }
        }
        //if(maxcnt<cnt2)
      //      maxcnt=cnt2;
        cout<<mincnt<<" "<<maxcnt<<endl;
    }
    return 0;
}
