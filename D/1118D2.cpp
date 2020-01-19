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
    long long n,m;
    cin>>n>>m;
    long long a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,my);
    long long hi=n,lo=1,ans=-1,day,num=64;
    while(num--)
    {
        long long total=0,reduce=0,taken=0;
        day=(hi+lo)>>1;
        for(int i=1;i<=n;i++)
        {
            total+=max(0LL,a[i]-reduce);
            taken++;
            if(taken==day){taken=0;reduce++;}
        }
        if(total>=m){ans=day;hi=day;}
        else lo=day+1;
    }
    cout<<ans<<endl;
    return 0;
}

