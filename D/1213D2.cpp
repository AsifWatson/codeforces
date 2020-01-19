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

vector<int> v[200005];

void split(int a)
{
    int n=0;
    while(true)
    {
        v[a].push_back(n++);
        if(a==0)break;
        a/=2;
    }
}

int main()
{
    IOS
    int n,k,mx=INT_MIN;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        split(a[i]);
        mx=max(mx,a[i]);
    }
    int ans=INT_MAX;
    for(int i=0;i<=mx;i++)
    {
        sort(all(v[i]));
        if(v[i].size()<k)continue;
        int sum=0;
        for(int j=0;j<k;j++)
        {
            sum+=v[i][j];
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}


