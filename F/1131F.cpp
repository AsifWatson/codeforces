#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
const int MAX = 150010;

bool compare(long long a,long long b)
{
    return a>b;
}

long long n,rights[MAX],find_left[MAX],find_right[MAX];

long long findLeft(long long y)
{
    if(find_left[y]==y) return y;
    return find_left[y]=findLeft(find_left[y]);
}

long long findRight(long long x)
{
    if(find_right[x]==x) return x;
    return find_right[x]=findRight(find_right[x]);
}

int main()
{
    IOS
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        rights[i]=i;
        find_left[i]=i;
        find_right[i]=i;
    }
    for(int i=1;i<n;i++)
    {
        long long x,y;
        cin>>x>>y;
        x=findRight(x);
        y=findLeft(y);
        rights[x]=y;
        find_right[x]=y;
        find_left[y]=x;
    }
    long long x=findLeft(n);
    for(int i=1;i<=n;i++)
    {
        cout<<x<<" ";
        x=rights[x];
    }
    return 0;
}
