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
    string s;
    cin>>s;
    int zero=0,one=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            zero++;
            if(zero%2==1)
            {
                cout<<"1 1"<<endl;
            }
            else
            {
                cout<<"3 1"<<endl;
            }
        }
        if(s[i]=='1')
        {
            one++;
            if(one%2==1)
            {
                cout<<"4 3"<<endl;
            }
            else
            {
                cout<<"4 1"<<endl;
            }
        }
    }
    return 0;
}
