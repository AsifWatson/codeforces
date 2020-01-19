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

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

long long bigmod(long long b, long long p, long long m)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        long long c = bigmod(b, p/2, m);
        return ( (c%m)*(c%m) )%m;
    }
    else
    {
        return ((b%m)*(bigmod(b, p-1, m)))%m;
    }
}

int main()
{
    IOS
    int h,w;
    cin>>h>>w;
    int a[h+5][w+5],H[h+5],W[w+5];
    memset(a,0,sizeof(a));

    for(int i=1; i<=h; i++)
    {
        cin>>H[i];
        for(int j=1;j<=H[i];j++)
        {
            a[i][j]=1;
        }
    }
    for(int i=1; i<=w; i++)
    {
        cin>>W[i];
        for(int j=1;j<=W[i];j++)
        {
            a[j][i]=1;
        }
    }
    for(int i=1; i<=h; i++)
    {
        int cnt=0;
        for(int j=1;j<=w;j++)
        {
            if(!a[i][j])break;
            if(a[i][j])cnt++;
        }
        if(H[i]!=cnt)
        {
            cout<<"0"<<endl;
            return 0;
        }
    }
    for(int i=1; i<=w; i++)
    {
        int cnt=0;
        for(int j=1;j<=h;j++)
        {
            if(!a[j][i])break;
            if(a[j][i])cnt++;
        }
        if(W[i]!=cnt)
        {
            cout<<"0"<<endl;
            return 0;
        }
    }
    for(int i=1; i<=h; i++)
    {
        a[i][H[i]+1]=1;
    }
    for(int i=1; i<=w; i++)
    {
        a[W[i]+1][i]=1;
    }
    long long cntt=0;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(a[i][j]==0)cntt++;
        }
    }
    cout<<bigmod(2LL,cntt,1000000007LL)<<endl;
    return 0;
}
