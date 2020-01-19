#include<bits/stdc++.h>
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

bool Reverse(long long a,long long b)
{
    return a>b;
}

int main()
{
    IOS
    int n,mx=INT_MIN,mx_num,flag=0;
    cin>>n;
    int a[n+1];
    map<int,int> mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(!mp[a[i]]) mp[a[i]]=1;
        else mp[a[i]]++;
        if(mp[a[i]]>mx)
        {
            mx=mp[a[i]];
            mx_num=a[i];
        }
    }
    cout<<n-mx<<endl;
    if(n==mx) return 0;
    int pos;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==mx_num)
        {
            pos=i;
            break;
        }
    }
    for(int i=pos-1;i>=1;i--)
    {
        if(a[i]<mx_num)cout<<"1 "<<i<<" "<<i+1<<endl;
        if(a[i]>mx_num)cout<<"2 "<<i<<" "<<i+1<<endl;
    }
    for(int i=pos+1;i<=n;i++)
    {
        if(a[i]<mx_num)cout<<"1 "<<i<<" "<<i-1<<endl;
        if(a[i]>mx_num)cout<<"2 "<<i<<" "<<i-1<<endl;
    }
    return 0;
}
