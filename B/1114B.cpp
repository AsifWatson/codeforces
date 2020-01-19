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
    long long n,m,k,need,sum=0;
    cin>>n>>m>>k;
    long long a[n],b[n];
    map<long long,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    need=m*k;
    for(int i=n-1;i>=n-need;i--)
    {
        sum+=b[i];
        if(!mp[b[i]]) mp[b[i]]=1;
        else mp[b[i]]++;
    }
    cout<<sum<<endl;
    long long coun=0;
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]])
        {
            mp[a[i]]--;
            coun++;
            if(coun==need) break;
            if(coun%m==0) cout<<i+1<<" ";
        }
    }
    return 0;
}
