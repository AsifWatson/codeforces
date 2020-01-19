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
    long long n,m,totqtn=0;
    cin>>n>>m;
    long long qnt[n+1],cost[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>qnt[i];
        totqtn+=qnt[i];
    }
    typedef pair<long long,long long> pairs;
    set<pairs > st;
    for(int i=1; i<=n; i++)
    {
        cin>>cost[i];
        st.insert({cost[i],i});
    }
    while(m--)
    {
        long long t,d,sum=0,flag=0;
        cin>>t>>d;
        if(st.size()==0 || totqtn<d)
        {
            totqtn=0;
            cout<<"0"<<endl;
            continue;
        }
        while(d>0)
        {
            if(qnt[t]>0)
            {
                if(qnt[t]>=d)
                {
                    qnt[t]-=d;
                    totqtn-=d;
                    if(qnt[t]==0)
                    {
                        st.erase({cost[t],t});
                    }
                    sum+=cost[t]*d;
                    d=0;
                }
                else
                {
                    st.erase({cost[t],t});
                    sum+=cost[t]*qnt[t];
                    d-=qnt[t];
                    totqtn-=qnt[t];
                    qnt[t]=0;
                    pairs x=*st.begin();
                    t=x.second;
                }
            }
            else
            {
                pairs x=*st.begin();
                t=x.second;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
