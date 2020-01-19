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

bool my(long long a,long long b)
{
    return a>b;
}

vector<long long> v[100005];

int main()
{
    IOS
    long long n;
    cin>>n;
    long long x;
    for(int i=0;i<2*n;i++)
    {
        cin>>x;
        v[x].push_back(i+1);
    }
    long long ans=0,pos1=1,pos2=1;
    for(int i=1;i<=n;i++)
    {
        long long dist1=abs(pos1-v[i][0])+abs(pos2-v[i][1]);
        long long dist2=abs(pos2-v[i][0])+abs(pos1-v[i][1]);
        ans+=min(dist1,dist2);
        pos1=v[i][0];
        pos2=v[i][1];
    }
    cout<<ans<<endl;
    return 0;
}
