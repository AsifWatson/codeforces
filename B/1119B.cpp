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

bool Reverse(long long a,long long b)
{
    return a>b;
}

int main()
{
    IOS
    int n,h;
    cin>>n>>h;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int k=n;k>=1;k--)
    {
        vector<int> b(a.begin(),a.begin()+k);
        sort(allre(b));
        long long sum=0;
        for(int i=0;i<b.size();i+=2)
        {
            sum+=b[i];
        }
        if(sum<=h)
        {
            cout<<k<<endl;
            break;
        }
    }
    return 0;
}
