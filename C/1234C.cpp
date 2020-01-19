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

long long bigmod(long long b, long long p, long long m)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        long long c = bigmod(b, p/2, m);
        return ( (c%m)*(c%m) )%m;
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

int check(char type)
{
    if(type=='1' || type=='2')return 1;
    else return 2;
}

int main()
{
    IOS

    int q;
    cin>>q;

    while(q--)
    {
        int n;
        cin>>n;

        string a,b;
        cin>>a;
        cin>>b;

        int nowPos=1;
        for(int i=0; i<n; i++)
        {
            if(nowPos==1)
            {
                if(check(a[i])==1)nowPos=1;
                if(check(a[i])==2)
                {
                    if(check(b[i])==1)
                    {
                        nowPos=1;
                        break;
                    }
                    if(check(b[i])==2)nowPos=2;
                }
            }
            else if(nowPos==2)
            {
                if(check(b[i])==1)nowPos=2;
                if(check(b[i])==2)
                {
                    if(check(a[i])==1)
                    {
                        nowPos=1;
                        break;
                    }
                    if(check(a[i])==2)nowPos=1;
                }
            }
        }
        cout<<(nowPos==2? "YES" : "NO")<<endl;
    }

    return 0;
}
