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

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

map<int,int> Power;
int n;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n+1);i++)if(n%i==0)return false;
    return true;
}

void Prec()
{
    int siz=0;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            for(int j=1;;j++)
            {
                if(pow(i,j)<=n)Power[pow(i,j)]=1,siz++;
                else break;
            }
        }
    }
    cout<<siz<<endl;
}

int main()
{
    IOS

    cin>>n;

    Prec();

    for(int i=2;i<=n;i++)if(Power[i])cout<<i<<" ";

    return 0;
}

