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
|   CSTE,Noakhali Science and Technology University(11)     |
|                                                           |
************************************************************/

#include "bits/stdc++.h"
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b))

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long long n,k;
    cin>>n>>k;

    long long a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];

    sort(a+1,a+n+1);

    long long sum=0;
    for(int i=(n/2)+1;i<=n;i++)sum+=(a[n]-a[i]);

    if(k==sum)cout<<a[n]<<endl;
    if(k>sum)cout<<(a[n] + (k-sum)/((n/2)+1))<<endl;
    if(k<sum)
    {
        map<long long, long long> mp;
        set<long long> st;

        for(int i=(n/2)+1;i<=n;i++)
        {
            mp[a[i]]++;
            st.insert(a[i]);
        }

        vector<long long> v;
        for(auto it=st.begin();it!=st.end();it++)
        {
            v.push_back(*it);
        }
        for(int i=0;i<v.size()-1;i++)
        {
            long long first=v[i];
            long long total_first=mp[first];

            long long second=v[i+1];

            if(k>(total_first*(second-first)))
            {
                k-=total_first*(second-first);
                mp[second]+=mp[first];
            }
            else
            {
                cout<<first + (k/mp[first])<<endl;
                return 0;
            }
        }
    }

    return 0;
}

