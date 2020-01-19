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
    int n,flag=0;
    cin>>n;
    int a[n];
    map<int,int> mp;
    list<int> inc,dec;
    list<int> :: iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(!mp[a[i]])mp[a[i]]=1;
        else mp[a[i]]++;
        if(mp[a[i]]>2) flag=1;
    }
    if(flag)cout<<"NO"<<endl;
    else
    {
        sort(a,a+n,Reverse);
        dec.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])inc.push_front(a[i]);
            else dec.push_back(a[i]);
        }
        cout<<"YES"<<endl<<inc.size()<<endl;
        for(it=inc.begin();it!=inc.end();++it) cout<<*it<<" ";
        cout<<endl<<dec.size()<<endl;
        for(it=dec.begin();it!=dec.end();++it) cout<<*it<<" ";
    }
    return 0;
}
