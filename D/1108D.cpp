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

int n,coun=0;
int main()
{
    IOS
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=1;i<n;i++)
    {
        if(s[i]=='R' && s[i-1]=='R')
        {
            coun++;
            if(i+1==n)
            {
                s[i]='G';
                continue;
            }
            if(s[i+1]=='R')
            {
                s[i]='G';
            }
            if(s[i+1]=='G')
            {
                s[i]='B';
            }
            if(s[i+1]=='B')
            {
                s[i]='G';
            }
            continue;
        }
        if(s[i]=='G' && s[i-1]=='G')
        {
            coun++;
            if(i+1==n)
            {
                s[i]='B';
                continue;
            }
            if(s[i+1]=='R')
            {
                s[i]='B';
            }
            if(s[i+1]=='G')
            {
                s[i]='B';
            }
            if(s[i+1]=='B')
            {
                s[i]='R';
            }
            continue;
        }
        if(s[i]=='B' && s[i-1]=='B')
        {
            coun++;
            if(i+1==n)
            {
                s[i]='G';
                continue;
            }
            if(s[i+1]=='R')
            {
                s[i]='G';
            }
            if(s[i+1]=='G')
            {
                s[i]='R';
            }
            if(s[i+1]=='B')
            {
                s[i]='R';
            }
            continue;
        }
    }
    cout<<coun<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
