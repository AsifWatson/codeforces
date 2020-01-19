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
    long long t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long x,y,p,q;
        cin>>x>>y>>p>>q;
        if(p==q && x!=y){cout<<"-1"<<endl;continue;}
        if(x>0 && p==0){cout<<"-1"<<endl;continue;}
        if(p*y==q*x){cout<<"0"<<endl;continue;}
        long long st=0,ed=1000000000,mid,ans=999999999999999999,num=69;
        while(num--)
        {
            long long expected_x,expected_y,needed_x,needed_y;
            mid=(st+ed)/2;
            expected_x=mid*p;
            expected_y=mid*q;
            needed_x=expected_x-x;
            needed_y=expected_y-y;
            if((needed_x>=0 && needed_y>0) && needed_x<=needed_y)
            {
                ans=needed_y;
                ed=mid-1;
            }
            else st=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
