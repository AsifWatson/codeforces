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
    int n;
    cin>>n;
    string s[n];
    bool mark[60][60];
    for(int i=0;i<60;i++)
    {
        for(int j=0;j<60;j++)
        {
            mark[i][j]=true;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='.')
            {
                mark[i][j]=false;
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(s[i][j]=='.' && !mark[i][j])
            {
                if(s[i+1][j]=='.' && !mark[i+1][j] && s[i+2][j]=='.' && !mark[i+2][j] && s[i+1][j-1]=='.' && !mark[i+1][j-1] && s[i+1][j+1]=='.' && !mark[i+1][j+1])
                {
                    mark[i][j]=true;
                    mark[i+1][j]=true;
                    mark[i+2][j]=true;
                    mark[i+1][j-1]=true;
                    mark[i+1][j+1]=true;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!mark[i][j])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
