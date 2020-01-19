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
    int mark=0,z,mark2=0,y,ok=0,ok2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='[')
        {
            mark=1;
        }
        if(mark==1 && s[i]==':')
        {
            z=i+1;
            ok=1;
            break;
        }
    }
    for(int i=s.size()-1;i>=z;i--)
    {
        if(s[i]==']')
        {
            mark2=1;
        }
        if(mark2==1 && s[i]==':')
        {
            y=i-1;
            ok2=1;
            break;
        }
    }
    if(ok==0 || ok2==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int coun=0;
        for(int i=z;i<=y;i++)
        {
            if(s[i]=='|')
            {
                coun++;
            }
        }
        cout<<coun+4<<endl;
    }
    return 0;
}
