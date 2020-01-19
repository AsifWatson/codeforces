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

long long cnt[1005][1005];

int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    string grid[n];
    for(int i=0;i<n;i++)cin>>grid[i];
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;)
        {
            long long num=1,k=i;
            char ch=grid[i][j];
            while(true)
            {
                if(k==n-1)break;
                if(ch!=grid[k+1][j])break;
                num++;k++;
            }
            while(true)
            {
                cnt[i++][j]=num--;
                if(!num)break;
            }
        }
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            long long _cnt=cnt[i][j],num=0,k=j;
            if(i+(3*_cnt)-1>=n)continue;
            char a=grid[i][j],b=grid[i+_cnt][j],c=grid[i+(2*_cnt)][j];

            while(cnt[i][k]==_cnt && cnt[i+_cnt][k]==_cnt && cnt[i+(2*_cnt)][k]>=_cnt
            && a==grid[i][k] && b==grid[i+_cnt][k] && c==grid[i+(2*_cnt)][k] && k<m)
            {
                num++;
                k++;
            }
            ans+=num*(num+1)/2;
            if(j!=k)j=k-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
