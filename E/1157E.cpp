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

map<int,int> mp;

int main()
{
    IOS
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    set<int> st;
    set<int> :: iterator it;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        st.insert(b[i]);
        if(!mp[b[i]])mp[b[i]]=1;
        else mp[b[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        int need=n-a[i];
        if(need==n)need=0;
        if(mp[need])
        {
            mp[need]--;
            if(!mp[need])st.erase(need);
            cout<<"0 ";
        }
        else
        {
            it=st.upper_bound(need);
            int num=*it;
            if(num<=need){it=st.upper_bound(-1);num=*it;}
            cout<<(num+a[i])%n<<" ";
            mp[num]--;
            if(!mp[num])st.erase(num);
        }
    }
    return 0;
}
