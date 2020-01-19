#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b) )
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

int main()
{
    IOS
    int n,k,t;
    cin>>n>>k>>t;
    int per=t*n*k/100;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        if(per>k)
        {
            v.push_back(k);
            per-=k;
            continue;
        }
        else
        {
            if(per>=1)v.push_back(per);
            else v.push_back(0);
            for(int j=i+1;j<=n;j++)v.push_back(0);
            break;
        }
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}
