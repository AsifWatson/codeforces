#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

int cnt[100010],color[12],mx,ans;

int main()
{
    IOS
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        cnt[color[x]]--;
        color[x]++;
        cnt[color[x]]++;

        mx=max(mx,color[x]);
        bool ok=false;
        if(cnt[1]==i)ok=true;
        else if(cnt[i]==1)ok=true;
        else if(cnt[1]==1 && cnt[mx]*mx==i-1)ok=true;
        else if(cnt[mx]==1 && cnt[mx-1]*(mx-1)==i-mx)ok=true;
        if(ok)ans=i;
    }
    cout<<ans<<endl;
    return 0;
}
