#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);

map<int,int> mp;

int main()
{
    IOS

    int n,k,mx=0,num,sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(!mp[a])
        {
            mp[a]=1;
            mx=max(mx,mp[a]);
            continue;
        }
        mp[a]++;
        mx=max(mx,mp[a]);
    }
    if(mx%k==0)
    {
        num=mx;
    }
    else
    {
        num=mx/k;
        num++;
        num=num*k;
    }
    for(int i=1;i<=100;i++)
    {
        if(!mp[i])
        {
            continue;
        }
        if(mp[i])
        {
            sum=sum+(num-mp[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}
