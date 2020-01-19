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
#define Iterate(st,it) for(auto it=st.begin();it!=st.end();it++)
#define Iteratere(st,it) for(auto it=st.rbegin();it!=st.rend();it++)
#define All(v) v.begin(),v.end()
#define Allre(v) v.rbegin(),v.rend()
#define SP(x,y) fixed<<setprecision(y)<<x
#define Min(v) *min_element(All(v))
#define Max(v) *max_element(All(v))
#define Max3(a,b,c) max(a,max(b,c))
#define Min3(a,b,c) min(a,min(b,c))
#define MEM(Array,Value,Size) for(int i=0;i<Size;i++)Array[i]=Value
#define Unique(v) sort(All(v)),v.erase(unique(All(v)),v.end())

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

long long bigmod(long long b, long long p, long long m)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        long long c = bigmod(b, p/2, m);
        return ((c%m)*(c%m))%m;
    }
    else return ((b%m)*(bigmod(b, p-1, m)))%m;
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
    scanf("%d", &n);

    int Array[n];

    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &Array[i]);
    }

    long long i = 0, j = n - 1, LeftSum = 0, RightSum = 0, Ans = 0;
    while(i <= j)
    {
        if(LeftSum <= RightSum) LeftSum += Array[i++];
        else if(LeftSum > RightSum) RightSum += Array[j--];

        if(LeftSum == RightSum) Ans = max(Ans, LeftSum);
    }

    printf("%lld\n", Ans);

    return 0;
}

