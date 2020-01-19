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
    long long n;
    cin>>n;
    if(n==1)
    {
        cout<<"2"<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<"3"<<endl;
        return 0;
    }
    if(n==3 || n==4)
    {
        cout<<"4"<<endl;
        return 0;
    }
    long long sq;
    sq=sqrt(n);
    if(sq*sq==n)
    {
        cout<<2*sq<<endl;
        return 0;
    }
    for(int i=2;i<=sq+2;i++)
    {
        if(i*i<n && (i+1)*(i+1)>n)
        {
            if(n<=(i*i)+i)
            {
                cout<<(2*sq)+1<<endl;
            }
            else
            {
                cout<<(2*sq)+2<<endl;
            }
            break;
        }
    }
    return 0;
}
