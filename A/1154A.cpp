#include "bits/stdc++.h"
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

bool Reverse(long long a,long long b){return a>b;}

int main()
{
    IOS
    long long x,y,z,sum;
    long long a[4];
    for(int i=0;i<=3;i++)cin>>a[i];
    sort(a,a+4);
    long long first=a[0]-a[1];
    long long A=(first+a[2])/2;
    long long C=a[2]-A;
    long long B=a[3]-A-C;
    cout<<A<<" "<<B<<" "<<C<<endl;
    return 0;
}
