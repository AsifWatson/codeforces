#include<bits/stdc++.h>
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

bool my(long long a,long long b)
{
    return a>b;
}

int main()
{
    IOS
    long long n,coun=0,mx,mn,pre_max=0,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        mn=min(a,b);
        mx=max(a,b);
        if(mn>=pre_max)
        {
            ans+=(mn-pre_max+1);
        }
        if(a==b && i<n-1) ans--;
        pre_max=mx;
    }
    cout<<ans<<endl;
    return 0;
}
