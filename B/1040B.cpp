#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n,k,on,div,rest;
    cin>>n>>k;
    on=(2*k)+1;
    if(n%on==0)
        div=n/on;
    else
        div=(n/on)+1;
    cout<<div<<endl;
    if(k==0)
    {
        cout<<"1";
        for(int i=2;i<=n;i++)
        {
            cout<<" "<<i;
        }
        cout<<endl;
        return 0;
    }
    rest=n%on;
    if(rest==0)
    {
        ///cout<<"f"<<endl;
        cout<<k+1;
        for(int i=2;i<=div;i++)
        {
            cout<<" "<<k+1+(on*(i-1));
        }
        cout<<endl;
    }
    if(rest>=k+1)
    {
        ///cout<<"s"<<endl;
        cout<<k+1;
        for(int i=2;i<=div;i++)
        {
            cout<<" "<<k+1+(on*(i-1));
        }
        cout<<endl;
    }
    if(rest<k+1 && rest!=0)
    {
        ///cout<<"t"<<endl;
        int need=(k+1)-rest;
        cout<<(k+1)-need;
        for(int i=2;i<=div;i++)
        {
            cout<<" "<<k+1+(on*(i-1))-need;
        }
        cout<<endl;
    }
    return 0;
}

