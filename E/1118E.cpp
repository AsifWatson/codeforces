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
    long long n,k;
    cin>>n>>k;
    if(n>(k*(k-1))) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        long long cnt=0;
        for(int i=1;i<=k;i++)
        {
            for(int j=i+1;j<=k;j++)
            {
                cout<<i<<" "<<j<<endl;
                cnt++;
                if(cnt==n) return 0;
                cout<<j<<" "<<i<<endl;
                cnt++;
                if(cnt==n) return 0;
            }
        }
    }
    return 0;
}
