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

long long totalDiv(long long n)
{
    long long div=0;
    for(int i=2;i<=sqrt(n);i++){if(n%i==0)div+=2;if(i==sqrt(n))div--;}
    return div;
}

int main()
{
    IOS
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        set<long long>st;
        for(long long i=0,j=n-1;i<((n+1)/2);i++,j--)st.insert(a[i]*a[j]);
        if(st.size()!=1){cout<<"-1"<<endl;continue;}
        if(totalDiv(a[0]*a[n-1])!=n)cout<<"-1"<<endl;
        else cout<<(a[0])*(a[n-1])<<endl;
    }
    return 0;
}
