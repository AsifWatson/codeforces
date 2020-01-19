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
    int n,coun=0;
    cin>>n;
    char str[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>str[i][j];
        }
    }
    for(int i=2;i<n;i++)
    {
        for(int j=2;j<n;j++)
        {
            //cout<<str[i][j];
            if(str[i][j]=='X')
            {
                if(str[i-1][j-1]=='X' && str[i+1][j-1]=='X' && str[i-1][j+1]=='X' && str[i+1][j+1]=='X')
                {
                    coun++;
                }
            }
        }
        //cout<<endl;
    }
    cout<<coun<<endl;
    return 0;
}
