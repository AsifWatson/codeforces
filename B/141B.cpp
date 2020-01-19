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

int main()
{
    IOS
    int a,x,y,pos;
    cin>>a>>x>>y;
    if(y%a==0){cout<<"-1"<<endl;return 0;}
    else
    {
        pos=(y/a)+1;
        if(pos==1 || pos%2==0){if((a%2==0 && abs(x)>=a/2)||(a%2==1 && abs(x)>a/2)){cout<<"-1"<<endl;return 0;}}
        else{if(abs(x)>=a || x==0){cout<<"-1"<<endl;return 0;}}
    }
    if(pos!=1)
    {
        if(pos%2==0){pos-=2;pos/=2;pos*=3;pos+=2;}
        else
        {
            pos-=3;pos/=2;pos*=3;pos+=2;
            if(x<0)pos++;
            if(x>0)pos+=2;
        }
    }
    cout<<pos<<endl;
    return 0;
}
