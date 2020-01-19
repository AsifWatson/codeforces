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
    int n;
    cin>>n;
    long long a[n+5];
    long long p[n+5];
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(i==1)p[i]=1LL;
        else p[i]=(p[i-1]*2LL)%MOD;
    }
    long long ans=0;
    int x=1,y=n;
    for(int i=1;i<=n;i++)
    {
        ans+=(a[i]*(p[x++]-p[y--]))%MOD;
        ans%=MOD;
    }
    cout<<ans<<endl;
    return 0;
}
