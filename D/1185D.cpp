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

long long n;
vector<pair<int,int> >v;
bool check(int first)
{
    set<int>st;
    int last=v[first].first;
    for(int i=3;i<=n;i++)
    {
        st.insert(v[i].first-last);
        last=v[i].first;
    }
    if(st.size()==1)return true;
    else return false;
}

int main()
{
    IOS
    cin>>n;
    v.push_back({INT_MIN,0});
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(all(v));
    if(n==2 || n==3){cout<<"1"<<endl;return 0;}
    if(check(1))cout<<v[2].second<<endl;
    else if(check(2))cout<<v[1].second<<endl;
    else
    {
        int ans,eras=0;
        int dif=v[2].first-v[1].first;
        for(int i=3;i<=n;i++)
        {
            if(v[i].first-v[i-1].first>dif)
            {
                if(!eras && i==n){eras=1;ans=n;break;}
                else {cout<<"-1"<<endl; return 0;}
            }
            else if(v[i].first-v[i-1].first<dif)
            {
                if(!eras && i==n){eras=1;ans=n;break;}
                if(v[i+1].first-v[i-1].first==dif)
                {
                    eras++;ans=i;i++;
                }
            }
        }
        if(eras==1)cout<<v[ans].second<<endl;
        else if(eras>1)cout<<"-1"<<endl;
    }
    return 0;
}
