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
    int a,b,c;
    cin>>a>>b>>c;
    int minBC=min(b/2,c/2);
    int minABC=min(minBC,a/3);
    int day=minABC*7;
    int restA=a-(minABC*3);
    int restB=b-(minABC*2);
    int restC=c-(minABC*2);
   /// cout<<day<<endl;
    ///cout<<restA<<" "<<restB<<" "<<restC<<endl;
    if(restA==0 && restB==0 && restC==0)
    {
        cout<<day<<endl;
        return 0;
    }
    if(restA==0)
    {
        if(restB==0)day++;
        if(restB==1)
        {
            if(restC==0)day++;
            if(restC>0)day+=2;
        }
        if(restB>1)
        {
            if(restC==0)day++;
            if(restC>0)day+=2;
        }
    }
    if(restA==1)
    {
        if(restB==0)
        {
            if(restC==1)day+=2;
            if(restC>1)day+=3;
        }
        if(restB==1)
        {
            if(restC==0)day+=2;
            if(restC==1)day+=3;
            if(restC>1)day+=4;
        }
        if(restB>1)
        {
            if(restC==0)day+=2;
            if(restC==1)day+=3;
            if(restC>1)day+=5;
        }
    }
    if(restA==2)
    {
        if(restB==0)day+=2;
        if(restB==1)
        {
            if(restC==0)day+=3;
            if(restC==1)day+=4;
            if(restC>1)day+=5;
        }
        if(restB>1)
        {
            if(restC==0)day+=4;
            if(restC==1)day+=5;
            if(restC>1)day+=6;
        }
    }
    if(restA>2)
    {
        if(restB==0)
        {
            if(restC==0)day+=2;
            if(restC==1)day+=2;
            if(restC>1)day+=3;
        }
        if(restB==1)
        {
            if(restC==0)day+=3;
            if(restC==1)day+=5;
            if(restC>1)day+=6;
        }
        if(restB>1)
        {
            if(restC==0)day+=4;
            if(restC==1)day+=6;
        }
    }
    cout<<day<<endl;
    return 0;
}
