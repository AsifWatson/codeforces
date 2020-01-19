#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(false); cout.tie(false);
    long long n,k;
    cin>>n>>k;
    if(k>n)
    {
        long long v=k-n;
        if(v>n-1)
        {
            cout<<"0"<<endl;
            return 0;
        }
        long long ans=(n-v+1)/2;
        cout<<ans<<endl;
    }
    if(k<=n)
    {
        long long v=k-1;
        long long ans=v/2;
        cout<<ans<<endl;
    }
    return 0;
}
