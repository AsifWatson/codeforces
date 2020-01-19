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

int main()
{
    IOS
    int q;
    cin>>q;
    while(q--)
    {
        int l1,r1,l2,r2,mn,mx;
        cin>>l1>>r1>>l2>>r2;
        mn=l1;
        mx=r2;
        if(mx==mn)
        {
            if(r1-l1>0)
            {
                mn++;
            }
            else
            {
                mx--;
            }
        }
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}
