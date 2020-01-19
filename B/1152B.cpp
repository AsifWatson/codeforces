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

int zero(int n)
{
    int i=1,pos=0;
    while(n)
    {
        if(n%2==0)pos=i;
        n/=2;
        i++;
    }
    return pos;
}

int p(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=2;
    }
    return sum-1;
}

int main()
{
    IOS
    int n,op=0;
    cin>>n;
    vector<int> v;
    while(true)
    {
        if(!zero(n)){cout<<op<<endl;break;}
        if(op%2==0)
        {
            v.push_back(zero(n));
            n^=p(zero(n));
        }
        if(op%2==1)n++;
        op++;
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}
