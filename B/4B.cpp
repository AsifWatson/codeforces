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
    int d,totalSum,minSum=0,maxSum=0;
    cin>>d>>totalSum;
    int a[d+1][3];
    for(int i=1;i<=d;i++)
    {
        cin>>a[i][1]>>a[i][2];
        minSum+=a[i][1];
        maxSum+=a[i][2];
    }
    if(totalSum < minSum || totalSum > maxSum){cout<<"NO"<<endl;return 0;}
    vector<int> v;
    for(int i=1;i<=d;i++)
    {
        int value;
        for(int j=a[i][1];j<=a[i][2];j++)
        {
            if(totalSum-j < minSum-a[i][1])break;
            value=j;
        }
        v.push_back(value);
        totalSum-=value;
        minSum-=a[i][1];
    }
    cout<<"YES"<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}
