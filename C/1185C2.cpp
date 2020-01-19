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
    int n,m,sum=0;
    cin>>n>>m;
    int cnt[102];
    memset(cnt,0,sizeof(cnt));
    for(int i=1;i<=n;i++)
    {
        int num;
        cin>>num;
        sum+=num;
        if(sum<=m)cout<<"0 ";
        else
        {
            int eras=sum-m;
            int remov=0;
            for(int j=100;j>=1;j--)
            {
                if(!cnt[j])continue;
                if(eras-j*cnt[j]>=0)
                {
                    remov+=cnt[j];
                    eras-=j*cnt[j];
                }
                else
                {
                    remov+=((eras+j-1)/j);
                    eras=0;
                }
                if(!eras)break;
            }
            cout<<remov<<" ";
        }
        cnt[num]++;
    }
    return 0;
}
