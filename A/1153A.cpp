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
    int busStop,serval,mindistance=INT_MAX,distance,ans;
    cin>>busStop>>serval;
    for(int i=1;i<=busStop;i++)
    {
        int firstBus,delay;
        cin>>firstBus>>delay;
        if(firstBus==serval)distance=0;
        if(firstBus>serval)distance=firstBus-serval;
        if(firstBus<serval)
        {
            for(int j=firstBus;;j+=delay)
            {
                if(j-serval>=0)
                {
                    distance=j-serval;
                    break;
                }
            }
        }
        if(distance<=mindistance){ans=i;mindistance=distance;}
    }
    cout<<ans<<endl;
    return 0;
}
