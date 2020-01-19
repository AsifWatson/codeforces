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

int main()
{
    IOS
    long long n,mx=0,mn=999999999999999999;
    cin>>n;
    vector<pair<pair<long long,long long>,long long > >v;

    for(int i=1;i<=sqrt(n);i++)if(n%i==0)v.push_back({{1,i},n/i});
    long long siz=v.size();
    for(int j=0;j<siz;j++)
    {
        long long loop=v[j].first.second;
        long long loop2=v[j].second;
        for(int i=2;i<=sqrt(loop);i++)if(loop%i==0)v.push_back({{i,loop/i},loop2});
        for(int i=2;i<=sqrt(loop2);i++)if(loop2%i==0)v.push_back({{loop,i},loop2/i});
    }
    for(int i=0;i<v.size();i++)
    {
        vector<long long>v2;

        v2.push_back(v[i].first.first);
        v2.push_back(v[i].first.second);
        v2.push_back(v[i].second);

        sort(v2.begin(),v2.end());

        mx=max(mx,(v2[0]+1)*(v2[1]+2)*(v2[2]+2));
        mx=max(mx,(v2[1]+1)*(v2[0]+2)*(v2[2]+2));
        mx=max(mx,(v2[2]+1)*(v2[0]+2)*(v2[1]+2));

        mn=min(mn,(v2[0]+1)*(v2[1]+2)*(v2[2]+2));
        mn=min(mn,(v2[1]+1)*(v2[0]+2)*(v2[2]+2));
        mn=min(mn,(v2[2]+1)*(v2[0]+2)*(v2[1]+2));
    }
    cout<<mn-n<<" "<<mx-n<<endl;
    return 0;
}
