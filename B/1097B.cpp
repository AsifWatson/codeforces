#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
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

int n,asif=1;
int a[17];

long long ikra(int lev,int val)
{
    if(lev==n)
    {
        if(val%360==0)
        {
            asif=2;
            return 0;
        }
        return 0;
    }
    ikra(lev+1,val+a[lev]);
    ikra(lev+1,val-a[lev]);
}

int main()
{
    IOS
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ikra(1,a[0]);
    if(asif==2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
