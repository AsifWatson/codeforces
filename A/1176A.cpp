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
    long long q,n,ans;
    cin>>q;
    while(q--)
    {
        cin>>n;
        ans=0;
        while(true)
        {
            if(n==1)break;
            if(n%2==0){n/=2;ans++;}
            else
            {
                if(n%3==0){n/=3;n*=2;ans++;}
                else if(n%5==0){n/=5;n*=4;ans++;}
                else {ans=-1;break;}
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
