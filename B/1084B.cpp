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
    long long n,s,least,sum=0,tot=0,rest,last,ans;
    cin>>n>>s;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        tot+=a[i];
    }
    if(s>tot)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    sort(a,a+n);
    least=a[0];
    for(long long i=0;i<n;i++)
    {
        sum+=(a[i]-least);
    }
    rest=s-sum;
    if(rest<1)
    {
        cout<<least<<endl;
        return 0;
    }
    last=((rest-1)/n)+1;
    ans=least-last;
    cout<<ans<<endl;
    return 0;
}

