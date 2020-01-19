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
    long long a,b,mn=99999999999999999,ans;
    cin>>a>>b;
    if(max(a,b)%min(a,b)==0){cout<<"0"<<endl; return 0;}
    vector<long long> v;
    for(long long i=1;i<=sqrt(abs(a-b));i++)
    {
        if(abs(a-b)%i==0)
        {
            v.push_back(i);
            v.push_back(abs(a-b)/i);
        }
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        long long x,y;
        x=a+(v[i]-(a%v[i]));
        y=b+(v[i]-(a%v[i]));
        long long value=(x*y)/__gcd(x,y);
        if(value<=mn)
        {
            mn=value;
            ans=(v[i]-(a%v[i]));
        }
    }
    long long value=(a*b)/__gcd(a,b);
    if(value<=mn)ans=0;
    cout<<ans<<endl;
    return 0;
}
