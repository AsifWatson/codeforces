#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    for(int i=0;i<k;i++)
    {
        int ta,fa,tb,fb;
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb)
        {
            cout<<abs(fb-fa)<<endl;
            continue;
        }
        if(fa<a)
        {
            int ans=abs(a-fa)+abs(tb-ta)+abs(a-fb);
            cout<<ans<<endl;
        }
        if(fa>b)
        {
            int ans=abs(b-fa)+abs(tb-ta)+abs(b-fb);
            cout<<ans<<endl;
        }
        if(fa>=a && fa<=b)
        {
            int ans=abs(tb-ta)+abs(fa-fb);
            cout<<ans<<endl;
        }
    }
    return 0;
}

