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
    long long n;
    cin>>n;
    long long a[n+2],ans,ans1,ans2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ans1=(a[n-2]-a[0]);
    ans2=(a[n-1]-a[1]);
    ans=min(ans1,ans2);
    cout<<ans<<endl;
    return 0;
}
