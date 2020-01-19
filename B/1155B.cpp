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

int main()
{
    IOS
    int n,eight=0,totalMoves,erase8,pos;
    string s;
    cin>>n;
    cin>>s;
    totalMoves=n-11;
    erase8=totalMoves/2;
    for(int i=0;i<n;i++)if(s[i]=='8')eight++;
    if(eight>totalMoves/2)
    {
        int coun=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='8')coun++;
            if(coun==erase8+1){pos=i+1;break;}
        }
        if(pos<=totalMoves+1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
