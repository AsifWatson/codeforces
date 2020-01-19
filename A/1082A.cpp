#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    long long t;
    cin>>t;
    for(long long i=1;i<=t;i++)
    {
        long long n,x,y,d,dis,ans,left=1000000010,right=1000000010;
        cin>>n>>x>>y>>d;
        dis=abs(x-y);
        if(dis%d==0)
        {
            ans=dis/d;
            cout<<ans<<endl;
            continue;
        }
        else
        {
            if((y-1)%d!=0 && (n-y)%d!=0)
            {
                cout<<"-1"<<endl;
                continue;
            }
            if((y-1)%d==0)
            {
                left=((((x-1)-1)/d)+1)+((y-1)/d);
            }
            if((n-y)%d==0)
            {
                right=((((n-x)-1)/d)+1)+((n-y)/d);
            }
            ans=min(left,right);
            cout<<ans<<endl;
        }
    }
    return 0;
}
