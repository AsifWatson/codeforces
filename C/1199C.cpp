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

bool Reverse(long long a,long long b)
{
    return a>b;
}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n,I,given_bits,bits_needed;

    cin>>n>>I;
    int a[n];

    given_bits=I*8;

    set<int>st;
    map<int,int>mp;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
        mp[a[i]]++;
    }

    bits_needed=n*ceil(log2(st.size()));

    if(bits_needed <= given_bits)cout<<"0"<<endl;
    else
    {
        int element_to_reduce=0;
        for(int i=1;;i++)
        {
            if(n*ceil(log2(st.size()-i)) <= given_bits)
            {
                element_to_reduce=i;
                break;
            }
        }

        vector<int> Forward;
        vector<int> Backward;

        int cum=0;
        Forward.push_back(cum);
        Backward.push_back(cum);

        for(auto it=st.begin(); it!=st.end(); it++)
        {
            cum+=mp[*it];
            Forward.push_back(cum);
        }

        cum=0;
        for(auto it=st.rbegin(); it!=st.rend(); it++)
        {
            cum+=mp[*it];
            Backward.push_back(cum);
        }

        int ans=INT_MAX;
        for(int i=0;i<=element_to_reduce;i++)
        {
            ans=min(ans,Forward[i]+Backward[element_to_reduce-i]);
        }

        cout<<ans<<endl;
    }
    return 0;
}

