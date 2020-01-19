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
    long long n,m,sum=0;
    cin>>n>>m;
    long long a[n+5];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    long long maxx=a[n-1];
    long long mark=0,take=0;
    /*cout<<endl/*<<maxx*/;
    for(long long i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            take++;
            mark=1;
            continue;
        }
        if(a[i]>mark)
        {
            take++;
            mark++;
            if(mark>maxx)
            {
                mark=maxx;
            }
            continue;
        }
        if(a[i]==mark)
        {
            take++;
        }
    }
    take+=(maxx-mark);
    cout<<sum-take<<endl;
    return 0;
}
