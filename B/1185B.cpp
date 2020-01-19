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
    int n;
    cin>>n;
    while(n--)
    {
        vector<pair<char,int> >v1,v2;
        string s1,s2;
        cin>>s1>>s2;
        int cnt=1;
        for(int i=1;i<s1.size();i++)
        {
            if(s1[i-1]==s1[i])cnt++;
            else
            {
                v1.push_back({s1[i-1],cnt});
                cnt=1;
            }
        }
        v1.push_back({s1[s1.size()-1],cnt});

        cnt=1;
        for(int i=1;i<s2.size();i++)
        {
            if(s2[i-1]==s2[i])cnt++;
            else
            {
                v2.push_back({s2[i-1],cnt});
                cnt=1;
            }
        }
        v2.push_back({s2[s2.size()-1],cnt});
        if(v1.size()!=v2.size())cout<<"NO"<<endl;
        else
        {
            int flag=1;
            for(int i=0;i<v1.size();i++)
            {
                if(v1[i].first!=v2[i].first){cout<<"NO"<<endl;flag=0;break;}
                else
                {
                    if(v1[i].second>v2[i].second){cout<<"NO"<<endl;flag=0;break;}
                }
            }
            if(flag)cout<<"YES"<<endl;
        }
    }
    return 0;
}
