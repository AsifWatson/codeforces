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
    long long q;
    cin>>q;
    while(q--)
    {
        long long k,n,a,b;
        cin>>k>>n>>a>>b;
        if(k<=(n*b))cout<<"-1"<<endl;
        else if(k>(n*a))cout<<n<<endl;
        else
        {
            long long min_need=(n*b)+1;

            long long remaining=(k-min_need);

            long long just_play=(remaining/(a-b));

            cout<<just_play<<endl;
        }
    }
    return 0;
}
