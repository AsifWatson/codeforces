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
    int n,num=1;
    cin>>n;
    int a[n+10];

    for(int i=0;i<n+10;i++)a[i]=0;

    for(int i=2;i<=n;i+=2)a[i]=num;

    for(int i=3;i<=n;i+=2)
    {
        if(!a[i] && i<=sqrt(n))
        {
            num++;
            a[i]=num;
            for(int j=i*i;j<=n;j+=i*2)a[j]=num;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(!a[i]){a[i]=++num;}
        cout<<a[i]<<" ";
    }
    return 0;
}
