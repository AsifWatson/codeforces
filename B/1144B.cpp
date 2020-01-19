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

int main()
{
    IOS
    int n,even=0,odd=0,sum=0,cuteven,cutodd;
    cin>>n;
    int a[n],evn[n],od[n],e=0,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1) {odd++; od[o++]=a[i];}
        else {even++; evn[e++]=a[i];}
    }
    sort(evn,evn+e);
    sort(od,od+o);
    if(odd>even){cuteven=even; cutodd=even+1;}
    else if(odd<even){cuteven=odd+1; cutodd=odd;}
    else {cuteven=even;cutodd=odd;}
    for(int i=0;i<e-cuteven;i++)sum+=evn[i];
    for(int i=0;i<o-cutodd;i++)sum+=od[i];
    cout<<sum<<endl;
    return 0;
}
