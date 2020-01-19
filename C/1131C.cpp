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

int main()
{
    IOS
    long long n;
    cin>>n;
    long long a[n+1];
    list<long long> lst;
    list<long long> :: iterator it;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,my);
    lst.push_back(a[1]);
    for(int i=2;i<=n;i++)
    {
        if(i%2==0) lst.push_front(a[i]);
        else lst.push_back(a[i]);
    }
    for(it=lst.begin();it!=lst.end();++it) cout<<*it<<" ";
    return 0;
}
