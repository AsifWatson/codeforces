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
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,one=0,two=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(x%3==0)ans++;
            else
            {
                if(x%3==1)one++;
                else if(x%3==2)two++;
            }
        }
        if(one<=two)ans+=one+((two-one)/3);
        else ans+=two+((one-two)/3);
        cout<<ans<<endl;
    }
    return 0;
}
