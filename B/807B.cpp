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
const int MOD = (int)475;

bool Reverse(long long a,long long b){return a>b;}

int main()
{
    IOS
    int p,x,y,cnt=0;
    cin>>p>>x>>y;
    int temp=x;
    while(temp>=y)
    {
        int ii=(temp/50)%MOD;
        for(int j=1;j<=25;j++)
        {
            ii=(ii*96+42)%MOD;
            if(ii+26==p){cout<<"0"<<endl;return 0;}
        }
        temp-=50;
    }
    temp=x;
    while(true)
    {
        temp+=50;cnt++;
        int ii=(temp/50)%MOD;
        for(int j=1;j<=25;j++)
        {
            ii=(ii*96+42)%MOD;
            if(ii+26==p){cout<<(cnt+1)/2<<endl;return 0;}
        }
    }
    return 0;
}
