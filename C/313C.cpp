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
    int x;
    cin>>x;
    long long a[x+1],sum=0;
    for(int i=1;i<=x;i++) cin>>a[i];
    sort(a+1,a+1+x);

    long long Start=1;
    long long End=(x-(x/4));
    long long rest=x;
    rest/=4;
    long long mul=1;
    while(true)
    {
        for(int i=Start;i<=End;i++)
        {
            sum+=a[i]*mul;
        }
        if(Start==End) break;
        Start=End+1;
        End=x-(rest/4);
        rest/=4;
        mul++;
    }
    cout<<sum<<endl;
    return 0;
}
