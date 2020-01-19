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
const long long MOD = 998244353;

bool Reverse(long long a,long long b){return a>b;}

int main()
{
    IOS
    long long n,sum=0;
    cin>>n;
    long long a[n],b[n];
    vector<long long>v;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    long long num1=n,num2=1;
    for(int i=0;i<n;i++)v.push_back(a[i]*num1--*num2++);
    sort(all(v));
    sort(b,b+n,Reverse);
    for(int i=0;i<n;i++)
    {
        sum+=((v[i]%MOD)*(b[i]))%MOD;
        sum%=MOD;
    }
    cout<<sum<<endl;
    return 0;
}
