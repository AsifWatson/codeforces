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
    long long n,m,value,flag=0,duration;
    cin>>n>>m;
    long long N[n+1],M[m+1];
    for(int i=1;i<=n;i++)
    {
        cin>>N[i];
        if(i==2)value=N[i]-N[i-1];
        if(i>2)value=GCD(N[i]-N[i-1],value);
    }
    ///cout<<value<<endl;
    for(int i=1;i<=m;i++)
    {
        cin>>M[i];
        if(value%M[i]==0)
        {
            flag=1;
            duration=i;
        }
    }
    if(flag)cout<<"YES"<<endl<<N[1]<<" "<<duration<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
