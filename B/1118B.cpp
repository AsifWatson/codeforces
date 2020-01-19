#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
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
    long long n;
    cin>>n;
    long long a[n+1],left[n+1],right[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long l=0,r=0;
    for(int i=n;i>=1;i--)
    {
        left[i]=l;
        right[i]=r;
        if(i%2==1) l+=a[i];
        else r+=a[i];
    }
    long long L=0,R=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        if(left[i]+R==right[i]+L) ans++;
        if(i%2==1) L+=a[i];
        else R+=a[i];
    }
    cout<<ans<<endl;
    return 0;
}
