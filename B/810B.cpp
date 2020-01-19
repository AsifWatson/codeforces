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
    int n,f;
    long long sum=0;
    cin>>n>>f;
    vector<long long>v;
    for(int i=1;i<=n;i++)
    {
        long long a,b;
        cin>>a>>b;
        sum+=min(a,b);
        long long additional;
        if(a>=b)additional=0;
        else
        {
            long long rest=b-a;
            long long increase=a;
            additional=min(rest,increase);
        }
        v.push_back(additional);
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<f;i++)sum+=v[i];
    cout<<sum<<endl;
    return 0;
}
