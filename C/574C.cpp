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
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

/*template <class T> inline T bigmod(T p,T e,T M)
{
    LL ret=1;
    for(; e>0; e>>=1)
    {
        if(e&1)ret=(ret*p)%M;
        p=(p*p)%M;
    }
    return (T)ret;
}*/

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

int n,a[100005];

int fullGcd()
{
    int GCD=a[0];
    for(int i=1; i<n; i++)GCD=gcd(GCD,a[i]);
    return GCD;
}

vector<int> multiples(int GCD)
{
    vector<int> v;
    for(int i=0; i<n; i++)v.push_back(a[i]/GCD);
    return v;
}

bool ok(int num)
{
    while(true)
    {
        if(num==1)return true;
        if(num&1)
        {
            if(num%3==0)num/=3;
            else return false;
        }
        else num/=2;
    }
}

int main()
{
    IOS

    cin>>n;

    for(int i=0;i<n;i++)cin>>a[i];

    vector<int> v=multiples(fullGcd());

    for(auto num : v)
    {
        if(!ok(num))
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;

    return 0;
}

