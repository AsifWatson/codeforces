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
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(k>=n)
    {
        cout<<n<<endl;
        return 0;
    }
    vector<long long> v;
    for(int i=0;i<n-1;i++)
    {
        v.push_back(a[i+1]-a[i]-1);
    }
    sort(v.begin(),v.end());
    long long sum=n;
    for(int i=0;i<(n-k);i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
    return 0;
}
