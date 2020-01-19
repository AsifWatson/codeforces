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

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

int arr[26];
int name_[26];

struct type{
    int var[26];
} cnt[200010];

bool check(int index)
{
    bool ok=true;
    for(int i=0;i<26;i++)
    {
        if(cnt[index].var[i]<name_[i])ok=false;
    }
    return ok;
}

int main()
{
    IOS
    int n;
    cin>>n;
    string s;
    cin>>s;
    s=" "+s;
    for(int i=1;i<s.size();i++)
    {
        arr[s[i]-'a']++;
        for(int j=0;j<26;j++)
        {
            cnt[i].var[j]=arr[j];
        }
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        string name;
        cin>>name;
        memset(name_,0,sizeof(name_));
        for(int i=0;i<name.size();i++)
        {
            name_[name[i]-'a']++;
        }
        int st=1,ed=s.size(),mid,num=69,ans;
        while(num--)
        {
            mid=(st+ed)/2;
            if(check(mid))
            {
                ed=mid-1;
                ans=mid;
            }
            else st=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}

