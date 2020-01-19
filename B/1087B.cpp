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
    long long n,k,ans=999999999;
    cin>>n>>k;
    vector<pair<long long,long long> > v;
    for(long long i=1;i<k;i++)
    {
        long long temp;
        temp=n/i;
        if(temp*i==n)
        {
            v.push_back(make_pair(i,temp));
        }
    }
    for(long long i=0;i<v.size();i++)
    {
        //cout<<v[i].first<<" x "<<v[i].second<<endl;
        ans=min(ans,((v[i].second*k)+v[i].first));
    }
    cout<<ans<<endl;
    return 0;
}
