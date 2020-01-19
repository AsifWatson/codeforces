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

bool Reverse(long long a,long long b)
{
    return a>b;
}

map<int,int> mp;

int main()
{
    IOS
    int n,k,a,coun=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        int rem=a%k;
        if(!mp[rem]) mp[rem]=1;
        else mp[rem]++;
    }
    coun+=mp[0]/2;
    if(k%2==0)coun+=mp[k/2]/2;
    for(int i=1;i<=k/2;i++)
    {
        if(k%2==0 && i==k/2)continue;
        coun+=min(mp[i],mp[k-i]);
    }
    cout<<coun*2<<endl;
    return 0;
}

