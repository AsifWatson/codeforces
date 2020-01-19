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
    ///IOS
    int n,m;
    cin>>n>>m;
    int a[105],cum[105],sum=0,remov[105];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        cum[i]=sum;
    }
    for(int i=0;i<n;i++)
    {
        if(cum[i]<=m)remov[i]=0;
        else
        {
            int temp=cum[i];

            vector<int>v;
            for(int j=i-1;j>=0;j--)v.push_back(a[j]);
            sort(v.rbegin(),v.rend());

            int cnt=0;
            for(int j=0;j<v.size();j++)
            {
                cnt++;
                temp-=v[j];
                if(temp<=m){remov[i]=cnt;break;}
            }
        }
        cout<<remov[i]<<" ";
    }
    return 0;
}
