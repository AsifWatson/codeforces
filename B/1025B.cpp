#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false); cin.tie(false); cout.tie(false);
using namespace std;

int main()
{
    IOS
    int n;
    long long gcd1,gcd2;
    cin>>n;
    vector<pair<long long,long long> >vp;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        vp.push_back(make_pair(a,b));
    }
    if(n==1)
    {
        cout<<vp[0].first<<endl;
        return 0;
    }
    sort(vp.rbegin(),vp.rend());
    long long fst=vp[0].first;
    long long snd=vp[0].second;
    for(int i=1;i<n;i++)
    {
        gcd1=__gcd(fst,vp[i].first);
        gcd2=__gcd(fst,vp[i].second);
        if(__gcd(gcd1,gcd2)==min(gcd1,gcd2))
        {
            fst=max(gcd1,gcd2);
        }
        else
        {
            fst=gcd1*gcd2;
        }
        if(fst==1)
        {
            break;
        }
    }
    if(fst!=1)
    {
        cout<<max(gcd1,gcd2)<<endl;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        gcd1=__gcd(snd,vp[i].first);
        gcd2=__gcd(snd,vp[i].second);
        if(__gcd(gcd1,gcd2)==min(gcd1,gcd2))
        {
            snd=max(gcd1,gcd2);
        }
        else
        {
            snd=gcd1*gcd2;
        }
        if(snd==1)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<max(gcd1,gcd2)<<endl;
    return 0;
}

