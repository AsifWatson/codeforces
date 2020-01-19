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

int n,f4,e8,f15,s16,t23,f42;

int main()
{
    IOS
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==4)f4++;
        if(x==8)if(f4)e8++,f4--;
        if(x==15)if(e8)f15++,e8--;
        if(x==16)if(f15)s16++,f15--;
        if(x==23)if(s16)t23++,s16--;
        if(x==42)if(t23)f42++,t23--;
    }
    cout<<n-(f42*6)<<endl;
    return 0;
}
