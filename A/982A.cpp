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
    int n,flag=1,zero=0;
    cin>>n;
    string s;
    cin>>s;
    if(n==1 && s[0]=='0')cout<<"No"<<endl;
    else
    {
        if(s[0]=='0' && s[1]=='0')
        {
            cout<<"No"<<endl;
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(zero>2){flag=0;break;}
                zero=0;
                if(s[i+1]=='1'  && i<n-1){flag=0;break;}
            }
            if(s[i]=='0')zero++;
        }
        if(zero>1)flag=0;
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
