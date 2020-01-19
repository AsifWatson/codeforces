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

int main()
{
    IOS
    string a,b;
    cin>>a>>b;
    int cnt_1_a[a.size()+1];
    cnt_1_a[0]=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1')cnt_1_a[i+1]=cnt_1_a[i]+1;
        else cnt_1_a[i+1]=cnt_1_a[i];
    }
    int cnt_1_b=0,ans=0;
    for(int i=0;i<b.size();i++)if(b[i]=='1')cnt_1_b++;
    for(int i=b.size()-1;i<a.size();i++)
    {
        if(((cnt_1_a[i+1]-cnt_1_a[i-b.size()+1])+cnt_1_b)%2==0)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
