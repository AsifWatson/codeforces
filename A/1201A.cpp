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

    int n,m,ans=0;
    cin>>n>>m;

    int ar[m];
    string s[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    for(int j=0;j<m;j++)
    {
        int a=0,b=0,c=0,d=0,e=0;
        for(int i=0;i<n;i++)
        {
            if(s[i][j]=='A')a++;
            if(s[i][j]=='B')b++;
            if(s[i][j]=='C')c++;
            if(s[i][j]=='D')d++;
            if(s[i][j]=='E')e++;
        }
        ans+=(ar[j]*(max(max(a,b),max(c,max(d,e)))));
    }
    cout<<ans<<endl;
    return 0;
}

