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
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > v,v1;
        map<pair<int,int>,int > mp;
        long long n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            long long a,b;
            cin>>a>>b;
            v.push_back({a,b});
            v1.push_back({a,b});
        }
        sort(v.begin(),v.end());
        int F1,F2,L1,L2;
        mp[{v[0].first,v[0].second}]=1;
        F1=v[0].first;
        L1=v[0].second;
        F2=1000000001;
        L2=0;
        bool right=false;
        for(int i=1;i<v.size();i++)
        {
            if(right==false && ((v[i].first>=F1 && v[i].first<=L1) || (v[i].second>=F1 && v[i].second<=L1)))
            {
                mp[{v[i].first,v[i].second}]=1;
                F1=min(F1,v[i].first);
                L1=max(L1,v[i].second);
            }
            else
            {
                mp[{v[i].first,v[i].second}]=2;
                right=true;
            }
        }
        if(!right)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<mp[v1[i]];
                if(i<n-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
