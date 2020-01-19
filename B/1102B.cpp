
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

map<long long,long long> m;
map<pair<long long,long long>,int > mp;

int main()
{
    IOS
    long long n,k,sum=0;
    cin>>n>>k;
    long long b[5001],a[n];
    bool mark=false;
    set<long long> st;
    for(int i=0;i<=5000;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]]>k)
        {
            mark=true;
        }
    }
    if(mark)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=1;i<=k;i++)
    {
        st.insert(i);
    }
    cout<<"YES"<<endl;
    long long z=1;
    for(int i=0;i<n;i++)
    {
        if(st.size()>0)
        {
            if(!m[a[i]])
            {
                cout<<z<<" ";
                st.erase(z);
                m[a[i]]=1;
                mp[{a[i],z}]=1;
                z++;
                continue;
            }
            if(m[a[i]])
            {
                if(!mp[{a[i],z}])
                {
                    cout<<z<<" ";
                    st.erase(z);
                    mp[{a[i],z}]=1;
                    z++;
                }
            }
            continue;
        }
        for(int j=1;j<=k;j++)
        {
            if(!mp[{a[i],j}])
            {
                cout<<j<<" ";
                mp[{a[i],j}]=1;
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}
