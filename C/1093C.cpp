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
    long long n,k,z=1;
    cin>>n;
    k=n;
    long long b[(n/2)+2];
    long long a[n+2];
    for(long long i=1;i<=(n/2);i++)
    {
        cin>>b[i];
    }
    a[k--]=b[1];
    a[1]=0;
    for(long long i=2;i<=(n/2);i++)
    {
        if(b[i]>=a[k+1])
        {
            a[k]=a[k+1];
            k--;
            a[i]=b[i]-a[k+1];
            if(a[i]<a[i-1])
            {
                long long dif;
                dif=abs(a[i-1]-a[i]);
                a[i]=a[i-1];
                a[k+1]=a[k+1]-dif;
            }
        }
        else
        {
            a[k]=b[i];
            k--;
            a[i]=b[i]-a[k+1];
            if(a[i]<a[i-1])
            {
                long long dif;
                dif=abs(a[i-1]-a[i]);
                a[i]=a[i-1];
                a[k+1]=a[k+1]-dif;
            }
        }
    }
    for(long long i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

