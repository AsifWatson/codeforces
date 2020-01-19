#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b) )
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    int n,k,One=0,Zero=0,ans=0,one,zero;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            One++;
        }
        else
        {
            Zero++;
        }
    }
    for(int i=1;i<=k;i++)
    {
        one=One;
        zero=Zero;
        for(int j=i-1;j<n;j+=k)
        {
            if(a[j]==1)
            {
                one--;
            }
            else
            {
                zero--;
            }
        }
        ans=max(ans,abs(one-zero));
    }
    cout<<ans<<endl;
    return 0;
}
