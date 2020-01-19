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

    int n;
    cin>>n;

    int a[n],maxi=INT_MIN;
    map<int,int> mp;
    set<int> st;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        st.insert(a[i]);
        maxi=max(maxi,a[i]);
    }

    vector<int> v;
    map<int,int> taken;
    for(int i=1;;i++)
    {
        if(taken[i])
        {
            if(mp[i]>0)
            {
                mp[i]--;
                v.push_back(i+1);
                taken[i+1]=1;
            }
            continue;
        }
        if(i>maxi+1)break;
        if(mp[i]>0)
        {
            mp[i]--;
            v.push_back(i);
            taken[i]=1;
            if(mp[i]>0)
            {
                mp[i]--;
                v.push_back(i+1);
                taken[i+1]=1;
            }
            continue;
        }
        if(mp[i+1]>0)
        {
            mp[i+1]--;
            v.push_back(i);
            taken[i]=1;
            continue;
        }
        if(mp[i-1]>0)
        {
            mp[i-1]--;
            v.push_back(i);
            taken[i]=1;
            continue;
        }
        //if(i>maxi)break;
    }

    //for(int x : v)cout<<x<<" ";
    cout<<v.size()<<endl;

    return 0;
}
