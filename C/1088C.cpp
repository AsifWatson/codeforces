#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    long long n,mod,sum=0,flag=0;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        {
            if(a[i]<=a[i-1])
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    mod=n+1;
    vector<pair<long long,long long> > v;
    for(long long i=n-1;i>=0;i--)
    {
        long long res,need;
        need=i+1;
        res=(a[i]+sum)%mod;
        if(need>=res)
        {
            sum+=(need-res);
            v.push_back(make_pair(need,(need-res)));
        }
        else
        {
            sum+=(mod-(res-need));
            v.push_back(make_pair(need,(mod-(res-need))));
        }
    }
    cout<<n+1<<endl;
    for(long long i=v.size()-1;i>=0;i--)
    {
        cout<<"1 "<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<"2 "<<n<<" "<<n+1<<endl;
    return 0;
}
