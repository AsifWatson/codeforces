/***********************************************************|
|          /\           /-------|   -----    |-----------|  |
|         /  \         /              |      |              |
|        /    \       |               |      |              |
|       /      \      |----|          |      |-------|      |
|      / ------ \          |-----|    |      |              |
|     /          \               |    |      |              |
|    /            \              /    |      |              |
|  ---            --- |---------/   -----  -----            |
|                                                           |
|   Codeforces = Asif_Watson  ||  Codechef = asif_watson    |
|   Mail = ashfaqislam33@gmail.com                          |
|   CSTE, Noakhali Science and Technology University(11)    |
|                                                           |
************************************************************/

#include "bits/stdc++.h"
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

template <class T> inline T bigmod(T p,T e,T M,T ret=1)
{
    for(; e>0; e>>=1){if(e&1)ret=(ret*p)%M; p=(p*p)%M;}
    return ret;
}

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    IOS
    int n;
    cin>>n;

    vector<pair<int,int> > v;

    for(int i=1; i<=n; i++)
    {
        int L;
        cin>>L;
        if(i==1 || L==0)continue;
        int low,high;
        low=max(1,i-L);
        high=i-1;
        v.push_back({low,high});
        //cout<<low<<" "<<high<<endl;
    }

    if(v.size()==0)cout<<n<<endl;
    else
    {
        sort(all(v));
        //for(auto k:v)cout<<k.first<<" "<<k.second<<endl;

        vector<pair<int,int> > v1;

        int low=v[0].first, high=v[0].second;
        for(int i=1; i<v.size(); i++)
        {
            if(v[i].first>=high+1)
            {
                v1.push_back({low,high});
                low=v[i].first;
                high=v[i].second;
            }
            else
            {
                if(v[i].second<=high)continue;
                high=v[i].second;
            }
        }
        v1.push_back({low,high});

        for(auto k : v1)
        {
            n-=(k.second-k.first+1);
        }
        cout<<n<<endl;
    }

    return 0;
}

