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
    long long n,sum=0,mn;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    mn=sum;
    for(int i=1;i<n;i++)
    {
        for(int j=2;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                mn=min(mn,sum-a[0]-a[i]+a[0]*j+a[i]/j);
            }
        }
    }
    cout<<mn<<endl;
    return 0;
}
