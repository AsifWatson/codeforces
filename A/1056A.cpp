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
    long long n,r;
    long long a[110];
    for(long long i=0;i<110;i++)
    {
        a[i]=0;
    }
    cin>>n;
    long long mark=n;
    while(n--)
    {
        cin>>r;
        for(long long i=1;i<=r;i++)
        {
            long long x;
            cin>>x;
            a[x]++;
        }
    }
    for(long long i=0;i<110;i++)
    {
        if(a[i]==mark)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
